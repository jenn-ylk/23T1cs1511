#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

struct node *new_node(int value) {
    // malloc a new node here, initialise fields, and return it
    struct node *new = malloc(sizeof(struct node));
    new->value = value;
    new->next = NULL;
    return new;
}

void print_list(struct node *list) {
    struct node *curr = list;
    while (curr != NULL) {
        // curr->value == (*curr).value
        printf("%d ", curr->value);
        curr = curr->next;
    }
    printf("X\n");
}

int main(void) {
    struct node *list = NULL;
    int value;
    print_list(list);
    while (scanf("%d", &value) == 1) {
        // create a new node and insert it at the end of the list
        struct node *new = new_node(value);
        if (list == NULL) {
            // list was empty
            list = new;
        } else {
            // loop to the end of the list
            struct node *curr = list;
            while (curr->next != NULL) {
                curr = curr->next;
            }
            curr->next = new;

        }
        print_list(list);
    }
}