// Week 3 COMP1511, 23T1
#define SIZE 4

#include <stdio.h>

void b(void) {
    int row = 0;
    while (row < SIZE) {
        int col = 0;
        while (col < SIZE) {
            // altered b to print a chessboard
            if ((col + row) % 2 == 0) {
                printf("O");
            } else {
                printf("X");

            }
            col++;
        }
        row++;
        printf("\n");
    }

    // if (row == col || row + col == SIZE)
}

int main (void) {
    b();
    return 0;
}