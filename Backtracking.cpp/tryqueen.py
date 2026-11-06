N = 4
board = [['.' for _ in range (N)] for _ in range(N)]
step = 0


def print_board():
    for row in board:
        print(' '.join(row))
    print()

def isSafe(row , column):
    for i in range(row):
        if board[i][column] == 'Q':
            return False

    i, j = row-1,column-1
    while i>=0 and j>=0:
        if board[i][column] == 'Q':
            return False
        i -= 1
        j -= 1

    i,j = row-1 , column + 1 
    while i > = 0 and j<N:
        if board[i][j] == 'Q':
            return False
        i -= 1
        j += 1

    return True

def solve(row):
    global step 
    if row == N:
        print("solution found ", step)
        print_board()
        print()

        return 

    print("checking row " , row )
    for col in range(N):
        step += 1
        print( "step" , step)
        print( row ) 
        print( column)

        if isSafe(row , column):
            print("safe")
            board[row][column] = 'Q'