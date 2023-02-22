#include <stdio.h>

void error_less_than(void);

int main(void) {
    // Initialise a and b
    int a;
    int b;
    scanf("%d %d", &a, &b);
    // check values of a and b
    if (a < b) {
        error_less_than();
    } else if (b == 0) {
        printf("ERROR: Second integer is 0\n");
    } else {
        // %d for integer, %lf for double
        printf("%d\n", a / b);
        printf("%lf\n", (a * 1.0) / (b * 1.0));
    }
}

void error_less_than(void) {
    printf("ERROR: First integer less than second integer\n");
}