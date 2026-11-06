import random

# 1. Initialize Population
population = [
    ''.join(random.choice('01') for _ in range(5))
    for _ in range(6)
]

# 2. Fitness Function
def fitness(ch):
    x = int(ch, 2)
    return x * x

# 3. Selection
def selection(population):
    population.sort(key=fitness, reverse=True)
    return population[:2]

# 4. Crossover
def crossover(p1, p2):
    point = random.randint(1, 4)

    child = p1[:point] + p2[point:]

    return child

# 5. Mutation
def mutation(child):
    if random.random() < 0.2:

        pos = random.randint(0, 4)

        bit = '1' if child[pos] == '0' else '0'

        child = child[:pos] + bit + child[pos+1:]

    return child

# 6. Main Genetic Algorithm
for generation in range(10):

    print("\nGeneration:", generation + 1)

    parents = selection(population)

    print("Selected Parents:", parents)

    new_population = parents.copy()

    while len(new_population) < 6:

        child = crossover(parents[0], parents[1])

        child = mutation(child)

        new_population.append(child)

    population = new_population

    # Find best chromosome
    best = max(population, key=fitness)

    print("Population:", population)
    print("Best Chromosome:", best)
    print("Fitness:", fitness(best))

# 7. Final Result
print("\nFinal Best Solution:", best)
print("Decimal Value:", int(best, 2))
print("Maximum Fitness:", fitness(best))