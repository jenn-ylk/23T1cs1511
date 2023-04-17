// Emily Chen & Tom Kunc
// Program to do various linked list exercises
// Written by <your-name> (zID) on <date>

#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;		// data item at this node
	struct node *next;		// pointer to the next node
};

/** PRESCRIBED FUNCTIONS **/

// Append to a linked list
struct node *add_last(struct node *head, int data);

// Prints the data of a linked list
void print_list(struct node *head);

// Returns a copy of the linked list and frees the original list.
struct node *copy_and_free(struct node *head);
struct node *copy(struct node *head);

// Returns a new linked list where it is the second appended to the first
struct node *list_append(struct node *first_list, struct node *second_list);

// Returns 1 if the two lists are identical, otherwise returns 0
int identical(struct node *first_list, struct node *second_list);

// Given two lists in strictly increasing order, perform the set operation: intersection.
// Return a new linked list (in strictly increasing order) of the elements in both set1 and set2
struct node *set_intersection(struct node *first_list, struct node *second_list);

/** REVISION FUNCTIONS **/

// Deletes the last node of the given linked list and returns the head of
// the linked list
struct node *delete_last(struct node *head);

// Returns 1 if list is in strictly increasing order, otherwise returns 0
int ordered(struct node *head);

// Given two linked lists in strictly increasing order, perform the set operation: union.
// Return a new linked list (in strictly increasing order) of the elements in either set1 or set2
// which has no duplicates (only include them once)
struct node *set_union(struct node *first_list, struct node *second_list);

// Frees all the elements in a linked list
void free_list(struct node *head);

// Return the number of items in the linked list
int num_items(struct node *head);

int main(void) {

    // TODO: Test the functions
    int num;
    struct node* list_1 = NULL;
    while (scanf("%d", &num) == 1) {
        list_1 = add_last(list_1, num);
    }
    print_list(list_1);
    // create a new list_1
    printf("%p\n", list_1);
    list_1 = copy_and_free(list_1);
    printf("%p\n", list_1);


    struct node *list_2 = NULL;
    list_2 = add_last(list_2, 4);
    list_2 = add_last(list_2, 5);
    list_2 = add_last(list_2, 6);

    struct node *new_list = list_append(list_1, list_2);
    print_list(new_list);

    free_list(list_1);
    free_list(list_2);
    free_list(new_list);
    return 0;
}

/** PRESCRIBED FUNCTIONS **/

struct node *add_last(struct node *head, int data) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;

    // Return new if linked list is initially empty
    if (head == NULL) {
        return new;
    }

    // Otherwise, loop to end of list and add node.
    struct node *curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = new;

    // We are inserting at the end --> head will not change
    return head;
}

void print_list(struct node *head) {
    struct node *curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("X\n");
}

struct node *copy(struct node *list) {
    struct node *new_list = NULL;
    struct node *curr = list;
    while (curr != NULL) {
        new_list = add_last(new_list, curr->data);
        curr = curr->next;
    }
    return new_list;
}

struct node *copy_and_free(struct node *list) {
    struct node *new_list = copy(list);

    free_list(list);
    return new_list;
}

struct node *list_append(struct node *first_list, struct node *second_list) {
    struct node *new_list = copy(first_list);
    // copy the first list
    if (new_list == NULL) {
        new_list = copy(second_list);
    } else {
        // find the last element of new_list and append second_list
        struct node *curr = new_list;
        while (curr->next != NULL) {
            curr = curr->next;
        }
        // append the copy
        curr->next = copy(second_list);
    }
    
    return new_list;
}

int identical(struct node *first_list, struct node *second_list) {
    int matching = 1;
    struct node *first_curr = first_list;
    struct node *second_curr = second_list;
    // iterate through both lists at once
    while (first_curr != NULL && second_curr != NULL && matching == 1) {
        // change matching to 0 immediately if they don't match
        if (first_curr->data != second_curr->data) {
            matching = 0;
        }
        first_curr = first_curr->next;
        second_curr = second_curr->next;
    }
    if (first_curr != NULL || second_curr != NULL) {
        matching = 0;
    }
    return matching;
}

struct node *set_intersection(
    struct node *first_list,
    struct node *second_list
) {
    return NULL;
}


struct node *delete_last(struct node *head) {
    // TODO:
    // empty list
    if (head == NULL) {
        return NULL;
    }
    // find second-last node to change the next value
    struct node *prev = NULL;
    struct node *curr = head;
    while(curr->next != NULL) {
        prev = curr;
        curr = curr->next;
    }
    free(curr);
    // one element list
    if (prev == NULL) {
        return NULL;
    }

    prev->next = NULL;
    return head;
}

void free_list(struct node *head) {
    // free(head); // doesn't properly account for all nodes after the head
    // iterate through the whole list freeing all nodes
    while (head != NULL) {
        // temporary node to store value to delete
        struct node *temp = head;
        head = head->next;
        // only free memory after nothing that needs to access other fields use
        // that poinnter anymore
        free(temp);
    }
}