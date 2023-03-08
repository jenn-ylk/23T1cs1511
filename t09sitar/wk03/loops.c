// Week 3 COMP1511, 23T1

#include <stdio.h>

void e(void) {
    int i = 0;
    int keep_going = 1;
    while (keep_going == 1) {
        if (i > 3) {
            keep_going = 0;
        }
        i++;
    }

    printf("%d\n", i);
}

void g(void) {
    int i = 0;
    int max = 32;
    while (i < max) {
        printf("%d\n", i);
        max = max + 2;
    }

}

int main (void) {

    // Simple while loop counting to 1-10
    // counter/ loop control variable
    /*
    int i = 1;
    // condition
    while (i <= 10) {
        // body 
        printf("%d\n", i);
        // increment
        i = i + 1;
    }
    */

    // run process e
    //e();

    // run process g
    g();

    return 0;
}