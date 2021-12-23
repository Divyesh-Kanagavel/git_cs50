#A 9*9 sudoku solver
dim = 9














def print_board(board):
    for i in range(dim):
        print(board[i])

def is_valid(board, val, pos):
    row,col = pos
    for j in range(0,9):
        if board[row][j] == val:
            return False

    for i in range(0,9):
        if board[i][col] == val:
            return False

    startRow = (row//3)*3
    startCol = (col//3)*3

    for i in range(0,3):
        for j in range(0,3):
            if board[startRow+i][startCol+j] == val:
                return False
    return True



def solve(board):
    for i in range(0, 9):
        for j in range(0, 9):
            if board[i][j] == 0:
                for val in range(1, 10):
                    if is_valid(board, val,(i,j)):
                        board[i][j] = val
                        solve(board)


                        board[i][j] = 0
                return
    print_board(board)




test_board = [[0,0,0,0,0,0,0,0,0],[0,0,0,0,0,0,0,0,0],[0,0,0,0,0,0,0,0,0],[0,0,0,0,0,0,0,0,0],[0,0,0,0,0,0,0,0,0],[0,0,0,0,0,0,0,0,0],[0,0,0,0,0,0,0,0,0],[0,0,0,0,0,0,0,0,0],[0,0,0,0,0,0,0,0,0]]

solve(test_board)






#print_board(test_board)
