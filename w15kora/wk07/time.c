#include <stdio.h>

void increment_time(int *days, int *hours, int *minutes);

int main(void) {
    // int n = 5;
    // int *p = &n;
    // printf("%d is stored at %p\n", *p, p);

    int days = 3;
    int hours = 4;
    int minutes = 59;

    increment_time(&days, &hours, &minutes);

    printf("Current time: %d days, %d hours and %d minutes\n", days, hours, minutes);

    return 0;
}

// increments the time by 1 minute
// Changed to use pointers and increment time outside the function (due to pass by reference to memory)
void increment_time(int *days, int *hours, int *minutes) {
    (*minutes)++; // dereference and increment
    if (*minutes == 60) {
        *minutes = 0;
        (*hours)++;
    }

    if (*hours == 24) {
        *hours = 0;
        (*days)++;
    }
}
