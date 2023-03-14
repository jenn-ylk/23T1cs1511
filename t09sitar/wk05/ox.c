#include <stdio.h>

#define SIZE 5

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

    if (did_player_win('X', x_wins_board)) {
        printf("X Won This Board!\n");
    } else if (did_player_win('O', x_wins_board)) {
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
    int i = 0;
    // for (init; condition; incr)
    // checks for wins in rows and columns
    int winning_diag_left = 1;
    int winning_diag_right = 1;
    while (i < SIZE && board_won == 0) {
        int j = 0;
        int winning_row = 1;
        int winning_col = 1;

        // check for diagonals both top left->bottom right, and top right->bottom left
        if (board[i][i] != player) {
            winning_diag_left = 0;
        }
        if (board[i][SIZE - 1 - i] != player) {
            winning_diag_right = 0;
        }
        // keep looping through the rows/columns, or until neither can have a win
        while (j < SIZE && (winning_row == 1 || winning_col == 1)) {
            // check for not being the player (can't have won in this row)
            if (board[i][j] != player) {
                winning_row = 0;
            }
            if (board[j][i] != player) {
                winning_col = 0;
            }
            j++;
        }
        // change the win status if a winning row was found
        if (winning_row == 1 || winning_col == 1) {
            board_won = 1;
        }
        i++;
    }

    if (winning_diag_left == 1 || winning_diag_right == 1) {
        board_won = 1;
    }   

    return board_won;
}