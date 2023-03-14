#include <stdio.h>
// included for strlen
#include <string.h>

#define MAX_LENGTH 256

int main(void) {
    char input[MAX_LENGTH];
    // get a line of input from the user
    fgets(input, MAX_LENGTH, stdin);
    fputs(input, stdout);
    // set all letters to uppercase
    int i = 0;
    while(input[i] != '\0') {
        if (input[i] > 'a' && input[i] < 'z') {
            input[i] = input[i] - 'a' + 'A';
        }
        i++;
    }

    fputs(input, stdout);

    // print the line backwards
    // start from the last letter before the new line
    int i = strlen(input) - 2;
    while (i >= 0) {
        printf("%c", input[i]);
        i--;
    }
    printf("\n");

}