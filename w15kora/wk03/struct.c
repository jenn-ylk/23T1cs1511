// Week 3 COMP1511, 23T1

#include <stdio.h>

struct person {
    int shoe_size;
    double height;
    char first_name_initial;
};

int main (void) {

    struct person my_person;// = {8, 190.0, 'T'};
    my_person.shoe_size = 8;
    // scan in height
    scanf("%lf", &my_person.height);
    // my_person.height = 190.0;
    my_person.first_name_initial = 'T';

    printf(
        "Name: %c, height: %.2lf, shoe size: %d\n", 
        my_person.first_name_initial, my_person.height, my_person.shoe_size
    );


    return 0;
}