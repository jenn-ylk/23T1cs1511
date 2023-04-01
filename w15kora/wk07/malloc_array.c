#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pet {
    int age;
    int weight;
    char name[100];
};

struct pet *new_pet(char name[100], int age, int weight);

// Takes in a number for how many ints in the array from the command line
// Then ask that many times for pet age, weight, and name
int main(int argc, char *argv[]) {
    printf("Program name: %s\n", argv[0]);
    // argv[0][1] == '/'

    int length = atoi(argv[1]);
    // Create the array by allocating enough memory (on the heap) for the array
    // returns a pointer, takes in number of bytes needed (sizeof calculates bytes for a type)
    int *array1 = malloc(sizeof(int) * length);
    printf("Enter numbers: ");
    for (int i = 0; i < length; i++) {
        scanf("%d", &array1[i]);
    }
    // {1, 2, 3, 4, 5, 6, 5, 4, 3, 2};

    // int *p = malloc(sizeof(int)); // allocate some memory for an integer
    // *p = 3;
    // printf("Allocated memory at %p, containing %d\n", p, *p);
    
    // Use of the new_pet function
    // Functions like this will be very useful when dealing with linked lists in the future
    // struct pet *my_pet = new_pet("Bob", 42, 19);
    // printf(
    //     "%s is %d years old and weighs %d kilograms\n",
    //     my_pet->name, my_pet->age, my_pet->weight
    // );
    
    printf("\nNumbers\n");
    for (int i = 0; i < length; i++) {
        printf("%d\n", array1[i]);
    }
}

// A function that allocates memory for and creates a pet
struct pet *new_pet(char name[100], int age, int weight) {
    struct pet *new = malloc(sizeof(struct pet));
    // Strcpy copies character by character the entire string to a new location
    strcpy(new->name, name);
    new->age = age;
    new->weight = weight;

    return new;
}