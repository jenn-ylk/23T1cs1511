#include <stdio.h>

#define SIZE    5
#define TRUE    1
#define FALSE   !TRUE

// Function Prototype
int did_player_win(char player, char board[SIZE][SIZE]);

int main(void) {
    char no_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'O', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'X', 'O', 'O', 'O'},
        {'X', ' ', ' ', ' ', 'O'},
    };

    char x_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'X', 'O', 'O', 'O'},
        {' ', 'X', ' ', ' ', 'O'},
    };
    char o_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'O', 'O', 'O', 'O'},
        {'X', 'X', ' ', ' ', 'O'},
    };

    if (did_player_win('X', no_wins_board)) {
        printf("X Won This Board!\n");
    } else if (did_player_win('O', no_wins_board)) {
        printf("O Won This Board!\n");
    } else {
        printf("Nobody has won this board!\n");
    }
}

// Function Implementation:
// Determines whether a given player has won the game of tictactoe
// by getting SIZE tokens in a row, in any direction.
int did_player_win(char player, char board[SIZE][SIZE]) {
    // variable for whether the player has won
    // once this is 1, no more checks for a winning position are needed
    int board_won = 0;

    // check rows
    int row = 0;
    int col = 0;
    while (row < SIZE && board_won == 0) {
        int row_won = 1;
        col = 0;
        while (col < SIZE && row_won == 1) {
            if (board[row][col] != player) {
                row_won = 0;
            }
            col++;
        }
        if (row_won == 1) {
            board_won = 1;
        }
        row++;
    }

    // check columns
    col = 0;
    while (col < SIZE && board_won == 0) {
        int col_won = 1;
        row = 0;
        while (row < SIZE && col_won == 1) {
            if (board[row][col] != player) {
                col_won = 0;
            }
            row++;
        }
        if (col_won == 1) {
            board_won = 1;
        }
        col++;
    }

    int diag = 0;
    int left_diag_won = 1;
    int right_diag_won = 1;
    while (diag < SIZE && (left_diag_won == 1 || right_diag_won == 1)) {
        if (board[diag][diag] != player) {
            left_diag_won = 0;
        }
        if (board[diag][SIZE - 1 - diag]) {
            right_diag_won = 0;
        }
        diag++;
    }
    if (left_diag_won == 1 || right_diag_won == 1) {
        board_won = 1;
    }

    return board_won;
}