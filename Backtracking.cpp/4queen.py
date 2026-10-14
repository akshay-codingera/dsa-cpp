
class Solution:

    def isSafe(self, row, col, board, n):

        print(f"\nChecking position: ({row}, {col})")

        print("  [HORIZONTAL CHECK]")

        for j in range(col, -1, -1):

            print(
                f"    Checking ({row}, {j}) "
                f"-> {board[row][j]}"
            )

            if board[row][j] == 'Q':
                print("    REJECTED: Queen found in the same row.")
                return False

        print("    Horizontal check passed.")

        print("  [UPPER-LEFT DIAGONAL CHECK]")

        i, j = row, col

        while i >= 0 and j >= 0:

            print(
                f"    Checking ({i}, {j}) "
                f"-> {board[i][j]}"
            )

            if board[i][j] == 'Q':
                print("    REJECTED: Queen found on upper-left diagonal.")
                return False

            i -= 1
            j -= 1

        print("    Upper-left diagonal check passed.")

        print("  [LOWER-LEFT DIAGONAL CHECK]")

        i, j = row, col

        while i < n and j >= 0:

            print(
                f"    Checking ({i}, {j}) "
                f"-> {board[i][j]}"
            )

            if board[i][j] == 'Q':
                print("    REJECTED: Queen found on lower-left diagonal.")
                return False

            i += 1
            j -= 1

        print("    Lower-left diagonal check passed.")

        print(f"  SAFE: Position ({row}, {col}) is valid.")
        return True

    def solve(self, col, board, ans, n):

        print(f"\n{'=' * 45}")
        print(f"ENTER solve(): col = {col}")

        print("Current board:")
        for row in board:
            print("  " + ''.join(row))

        if col == n:

            print("\n*** SOLUTION FOUND ***")

            for row in board:
                print("  " + ''.join(row))

            ans.append([''.join(row) for row in board])

            print("Solution stored in ans.")
            print("RETURNING from solve()")

            return

        for row in range(n):

            print(f"\nTrying candidate: row = {row}, col = {col}")

            if self.isSafe(row, col, board, n):

                board[row][col] = 'Q'

                print(f"\nPLACE QUEEN at ({row}, {col})")

                print("Board after placement:")
                for r in board:
                    print("  " + ''.join(r))

                print(f"\nCALLING solve({col + 1})")

                self.solve(col + 1, board, ans, n)

                print(f"\nBACKTRACK: Remove queen at ({row}, {col})")

                board[row][col] = '.'

                print("Board after removal:")
                for r in board:
                    print("  " + ''.join(r))

            else:
                print(f"SKIP position ({row}, {col})")

        print(f"\nEXIT solve(): col = {col}")

    def solveNQueens(self, n):

        ans = []

        board = [['.' for _ in range(n)] for _ in range(n)]

        print("INITIAL BOARD:")
        for row in board:
            print("  " + ''.join(row))

        self.solve(0, board, ans, n)

        return ans

obj = Solution()

result = obj.solveNQueens(4)

print("\n" + "=" * 45)
print("FINAL RESULT")
print("Total solutions:", len(result))

for i, solution in enumerate(result, start=1):

    print(f"\nSolution {i}:")

    for row in solution:
        print(row)

