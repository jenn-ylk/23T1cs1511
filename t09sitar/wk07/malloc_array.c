#include <stdio.h>
#include <stdlib.h>

struct pet {
    int age;
    int weight;
    char name[100];
};

// Takes in a number for how many integers in the array from the command line
// Then ask that many times for a number to put in that array, and print it
int main(int argc, char *argv[]) {
    printf("Name of program: %s\n", argv[0]);

    int array1[10] = {1, 2, 3, 4, 5, 6, 5, 4, 3, 2};

    // process command line args for the size of the array
    int length = atoi(argv[1]);
    // returns a pointer, takes in number of bytes needed (sizeof calculates bytes for a type)
    int *array2 = malloc(sizeof(int) * length);
    printf("Enter numbers:\n");
    for (int i = 0; i < length; i++) {
        scanf("%d", &array2[i]);
    }

    // for (int i = 0; i < 10; i++) {
    //     printf("%d\n", array1[i]);
    // }

    for (int i = 0; i < length; i++) {
        printf("%d\n", array2[i]);
    }
}