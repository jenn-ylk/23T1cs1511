// Wk 4 COMP1511 - Array exercises, using functions

#include <stdio.h>

#define ARR_SIZE 10

#define FIRST_LEN 3
#define SECOND_LEN 10

// finish these signatures, 
// what inputs are needed?
// how do we deal with length?

void print_array(int array[], int length);

void odd_only(int array[], int length);

// group exercises (example implementations below)
// takes a 3 element long array and a 10 element long array and 
// copies the first array into the second
// then prints the 10 element array
void copy_array(double first_array[FIRST_LEN], double second_array[SECOND_LEN]);

// iterates through a character array, returns the largest character
char largest_character(char characters[], int length);

int main(void) {
    printf("There's a lot to do here!\n");
    int test_array[] = {4, 2, 3, 7, 8};
    print_array(test_array, 5);
    // call odd_only on test_array
    // note, when done on an array, the changes to the array in the function remain 
    // (not the same with variables like ints, who's values are copied)
    odd_only(test_array, 5);
    printf("New array:\n");
    // print the array
    print_array(test_array, 5);
    // can odd_only be changed to tell 
    // us how many numbers had to be changed?


    int input_array[ARR_SIZE] = {0};

    // TODO: scan in the 10 numbers to the array using scanf, 
    for (int i = 0; i < ARR_SIZE; i++) {
        scanf("%d", &input_array[i]);
    }
    print_array(input_array, ARR_SIZE);

    return 0;
}

void print_array(int array[], int length) {
    int i = 0;
    while (i < length) {
        printf("%d\n", array[i]);
        i++;
    }
}

void odd_only(int array[], int length) {
    int i = 0;
    while (i < length) {
        if (array[i] % 2 == 0) {
            array[i] = array[i] + 1;
        }
        i++;
    }
}

void copy_array(double first_array[FIRST_LEN], double second_array[SECOND_LEN]) {
    int i = 0;
    // iterate through all elements of the first array
    while (i < FIRST_LEN) {
        // copy the value into the second array
        second_array[i] = first_array[i];
        i++;
    }
    
    int j = 0;
    while (j < SECOND_LEN) {
        printf("%lf\n", second_array[j]);
        j++;
    }
}

char largest_character(char characters[], int length) {
    char max_char = characters[0];

    int i = 1;
    // loop through all remaining characters
    while (i < length) {
        // check the current character against maximum
        if (characters[i] > max_char) {
            max_char = characters[i];
        }
        i++;
    }

    // return the maximum value
    return max_char;
}

