// A program to test writing functions that modify the data given to them
#include <stdio.h>

int square(int x);

void square_array(int array[], int length);

int main(void) {
    int num = 5;
    int arr[3] = {10, 10000, 2};

    num = square(num);
    printf("%d\n", num);

    square_array(arr, 3);
    for (int i = 0; i < 3; i++) {
        printf("%d\n", arr[i]);
    }
}

// When x is modified inside the function, that doesn't modify x outside the 
// function the only way it is modified here is by assigning the resturn value
int square(int x) {
    x = x * x;
    return x;
}

// When an array is modified inside a function, it is also modified outside, 
// this is becaus the array is passed to the function as the address of the 
// first element, so the actual memory is modified, while plain ints/chars etc.
// are passed as a copied value, in different memory
void square_array(int array[], int length) {
    for (int i = 0; i < length; i++) {
        array[i] = array[i] * array[i];
    }
}