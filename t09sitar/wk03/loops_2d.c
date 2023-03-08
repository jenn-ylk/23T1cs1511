// Week 3 COMP1511, 23T1
// some code showing 2 dimensional loops

#define SIZE 4

#include <stdio.h>

void b(void) {
    int row = 0;
    while (row < SIZE) {
        // make sure the iterator for the inner loop is reinitialised inside the outer loop
        int col = 0; 
        while (col < SIZE) {
            // whenever the sum of row and column is even, print an 'O'
            // this creates a checkerboard pattern
            if ((row + col) % 2 == 0) {
                printf("O");
            } else {
                printf("X");

            }
            col++;
        }
        row++;
        printf("\n");
    }
}

int main (void) {
    b();
    return 0;
}