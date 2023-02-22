// A program that scans in two numbers, and if appropriate, prints the 
// division of a / b, otherwise uses a procedure to show the error
// 23T1 COMP1511, Wk02

#include <stdio.h>

void error_less_than(void);
void error_zero(void);

int main(void) {
    // Scan in both numbers using scanf
    int a;
    int b;
    scanf("%d%d", &a, &b);

    // Check each of the error conditions, and call error procedures if needed
    // otherwise, print out both versions of the division 
    // (integer and floating point)
    if (a < b) {
        error_less_than();
    } else if (b == 0) {
        error_zero();
    } else {
        printf("%d\n", a / b);
        printf("%lf\n", (a * 1.0) / (b * 1.0));
    }

    return 0;
}

void error_less_than(void) {
    printf("Error! First number < second number\n");
}

void error_zero(void) {
    printf("Error! Second number = 0\n");
}