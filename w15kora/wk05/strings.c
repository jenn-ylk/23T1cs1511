#include <stdio.h>
// included for strlen
#include <string.h>

#define MAX_LENGTH 256

int is_lowercase(char c) {

    return 'a' <= c && c <= 'z';
}

int main(void) {
    // this string is automatically null terminated
    char input[MAX_LENGTH] = "Hello there!";
    // {'H', 'e', 'l', 'l', 'o', '\0'}


    int i = 0;
    int lowercase = 0;
    while (input[i] != '\0') {
        // could also use (i < strlen(input))
        // i < MAX_LENGTH // don't use this if trying to deal with strings (can have unexpected behaviour)
        printf("%c", input[i]);

        if (is_lowercase(input[i])) {
            lowercase++;
        }
        i++;
    }
    printf("\n");
    printf("There were %d lowercase letters\n", lowercase);


    // TODO: get a line of input from the user
    fgets(input, MAX_LENGTH, stdin);
    fputs(input, stdout);

    // TODO: print out the string backwards
    int letter = strlen(input) - 1;
    while (letter >= 0) {
        printf("%c", input[letter]);
        letter--;
    }
    printf("\n");
    

}