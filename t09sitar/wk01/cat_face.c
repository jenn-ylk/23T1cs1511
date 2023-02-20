// A simple C program to print a cat face
// COMP1511, T1, 2023
// To compile, with an output file called "cat_face", use the below command:
// dcc -o cat_face cat_face.c
// ^    ^          ^-- c file(s) to compile
// |    |-- flag, and intended output name
// |-- compiler 

// Use dcc on UNSW CSE, you can also use gcc, clang etc., though these will have less helpful error messages
// Always recompile between code changes

// Run your code with: ./cat_face

#include <stdio.h>

int main (void) {
    printf(" /\\___/\\\n");
    printf("(=' w '=)\n");
    return 0;
}