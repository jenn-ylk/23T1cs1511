// Wk 4 COMP1511 - A program that scans integers with scanf until it runs out of input

#include <stdio.h>

int main(void) {
    int sum = 0;
    // TODO: what is the return value of scanf?
    // scanf returns the number of inputs successfully scanned
    // or EOF (-1) when ctrl + D is hit
    int entered;
    // int result = scanf("%d", &entered);
    // as long as a successful scan occurs
    while (scanf("%d", &entered) == 1) {
        sum = sum + entered;
        // result = scanf("%d", &entered);
    }

    printf("The sum is %d\n", sum);
    return 0;
}