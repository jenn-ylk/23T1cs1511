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

int square(int x) {
    x = x * x;
    return x;
}

void square_array(int array[], int length) {
    int i = 0;
    while (i < length) {
        array[i] = array[i] * array[i];
        i++;
    }
}