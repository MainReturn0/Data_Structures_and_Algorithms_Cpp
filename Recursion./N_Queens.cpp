#include <iostream>
#include <vector>
using namespace std;



// Since the vector of vectors is dynamic and stores both the rows and columns directly, we don't necessarily need to pass the row and col values explicitly between functions, except where we need to access a specific position in the 2D grid.



bool isSafe(const vector<vector<char>>& board, int row, int col, int N) {
    // Check column
    for (int i = 0; i < row; i++) {
        if (board[i][col] == 'Q') {
            return false;  // Same column
        }
    }

    // Check diagonal (left-to-right)
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 'Q') {
            return false;  // Same left-to-right diagonal
        }
    }

    // Check diagonal (right-to-left)
    for (int i = row - 1, j = col + 1; i >= 0 && j < N; i--, j++) {
        if (board[i][j] == 'Q') {
            return false;  // Same right-to-left diagonal
        }
    }

    return true;  // Safe to place queen
}

bool solveNQueens(vector<vector<char>>& board, int row, int N) {
    // Base case: If all queens are placed
    if (row == N) {
        // Print the board
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
        return true;  // Found a solution
    }

    // Try placing a queen in each column of the current row
    for (int col = 0; col < N; col++) {
        if (isSafe(board, row, col, N)) {
            // Place queen
            board[row][col] = 'Q';

            // Recur to place queens in the next row
            if (solveNQueens(board, row + 1, N)) {
                return true;  // If placing queen leads to a solution, return true
            }

            // Backtrack: Remove queen if no solution found
            board[row][col] = '.';
        }
    }

    // If no valid position was found for this row, return false (backtrack)
    return false;
}

int main() {
    int N;
    cout << "Enter the size of the board (N): ";
    cin >> N;

    // Initialize the board
    vector<vector<char>> board(N, vector<char>(N, '.'));

    if (!solveNQueens(board, 0, N)) {
        cout << "No solution exists!" << endl;
    }

    return 0;
}
