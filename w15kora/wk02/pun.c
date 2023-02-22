// Based on the flowchart in the tutorial
// 23T1 COMP1511, Wk02

#include <stdio.h>

int main(void) {
    // Ask the user if they like puns
    printf("Do you like puns? ");
    char answer;
    // precede with a space to remove newlines/spaces etc. 
    // (though not needed here)
    scanf(" %c", &answer);

    if (answer == 'y') {
        printf("You will be glad to C this pun, then.\n");
    } else {
        printf("That's pUnfortunate\n");
    }

    return 0;
}