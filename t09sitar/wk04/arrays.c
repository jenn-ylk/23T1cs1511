// Wk 4 COMP1511 - Array exercises, using functions

#include <stdio.h>

#define ARR_SIZE 10

#define INPUT_SIZE 3
#define OUTPUT_SIZE 10

// finish these signatures, 
// what inputs are needed?
// how do we deal with length?

void print_array(int array[], int length);

// Takes in an array and ensures all elements are odd
int odd_only(int array[], int length);

// completed in groups:
// copies the three values in the first array into the second array
void copy_array(double first_array[INPUT_SIZE], double second_array[OUTPUT_SIZE]);

// loops through a character array to find the largest character value
char largest_character(char chars[], int length);

int main(void) {
    int test_array[] = {4, 2, 3, 7, 8};
    printf("Original array:\n");
    print_array(test_array, 5);
    printf("\n");
    // call odd_only on test_array
    int changed = odd_only(test_array, 5);
    printf("%d values were changed\n\n", changed);


    // TODO: print the array (Turn this into a function!)
    printf("Please enter 10 values for a new array:\n");
    int input_array[ARR_SIZE] = {0};
    int i = 0;
    while (i < 10) {
        scanf("%d", &input_array[i]);
        i++;
    }

    // TODO: scan in the 10 numbers to the array using scanf, 
    // then use odd_only on it, can odd_only be changed to tell 
    // us how many numbers had to be changed?

    return 0;
}

void print_array(int array[], int length) {
    int i = 0;
    while (i < length) {
        printf("%d\n", array[i]);
        i++;
    }
}

int odd_only(int array[], int length) {
    int changed = 0;
    int i = 0;
    // loop through all elements of the array
    while (i < length) {
        // check for divisibilty by 2, make odd if even
        if (array[i] % 2 == 0) {
            array[i] = array[i] + 1;
            changed++;
        }

        i++;
    }

    int j = 0;
    while (j < length) {
        printf("%d\n", array[j]);
        j++;
    }

    return changed;
}