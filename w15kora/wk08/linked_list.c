// A program that reads numbers from stdin and puts them in a linked list

#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

struct node *new_node(int value) {
    // malloc a new node here and return with initialised fields
    struct node *new = malloc(sizeof(struct node));
    new->value = value;
    new->next = NULL;
    return new;
}

void print_list(struct node *list) {
    struct node *curr = list;
    while (curr != NULL) {
        // print the number
        printf("%d ", curr->value);
        curr = curr->next;
    }
    // at this line curr == NULL
    printf("X\n");
}

int main(void) {
    struct node *list = NULL;
    int value;
    print_list(list);
    while (scanf("%d", &value) == 1) {
        // create a new node and insert it at the end of the list
        struct node *new = new_node(value);
        // insertion to the front of the list
        // new->next = list;
        // list = new;

        // what cases need to be considered here?
        if (list == NULL) {
            list = new;
        } else {
            // find the end of the linked list
            struct node *curr = list;
            while (curr->next != NULL) {
                curr = curr->next;
            }
            // curr should be the last element
            curr->next = new;
        }

        // does this change for an empty list, a list with one, two elements?
        print_list(list);
    }
}