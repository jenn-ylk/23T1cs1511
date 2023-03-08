// Wk 4 COMP1511 - A program that scans integers with scanf until it runs out of input

#include <stdio.h>

int main(void) {
    int sum = 0;
    // What is the return value of scanf?
    // - returns the number of values scanned
    //   or EOF (-1) when the end of file is reached
    int entered;
    while (scanf("%d", &entered) == 1) {
        sum += entered;
    }
    printf("%d\n", sum);
    return 0;
}