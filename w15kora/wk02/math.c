// A short program to check the result of certain arithmetic in C
// 23T1 COMP1511, Wk02

#include <stdio.h>

int main(void) {
    // print out maths equation results 
    // division with doubles is still an int when result is stored in an int
    int result = 6 / 5.0;
    printf("%lf\n", 6 / 5.0);
    printf("%d\n", result);

    // Addition with characters, both printing as an integer and a character
    printf("%c\n", 'A' + 5);
    printf("%d\n", 'A' + 5);

    return 0;
}