/*
 *
 *    A simply directed linked list
 *
 *              list_t        node_t     node_t      node_t
 *             |-------|    |-------|   |-------|   |-------|
 *             | head -|--->|       |   |       |   |       |
 *    list --> |       | |--|-prev  |<--|-prev  |<--|- prev |
 *             |       |    |_______|   |_______|   |_______|<---|
 *             | last -|-----------------------------------------|
 *             |_______|
 *
 *  NOTE: Nodes connected with a "prev" pointer, NOT a "next" as in the book!
 *        We also have a pointer to last node (simplifies)
 *
 *  See:
 *  - use_malloc.c (structs only)
 *  - dyn_struct.c
 *  - linked_list.c
 *  - linked_list_func.c
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

// Test macros
#define EQUALS(v1, v2) printf( (v1) == (v2) ? "true\n" : "false\n")

// Type for the nodes in list
typedef struct Node {
    int value;
    struct Node *prev;   // Should be NULL for first node
} node_t;

// Type for the list (start of a chain of nodes)
typedef struct List {
    int length;
    node_t *head;   // Pointing at first node
    node_t *last;   // Pointing at last node
} list_t;

// ----------- Declarations ---------------------------

// Create new empty list (length == 0)
list_t *list_new();

// Insert at end of list
void list_append(list_t *list, int value);

// Get value at index
int list_get(list_t *list, int index);

// Shift in value from left (head), last value lost
void list_shift(list_t *list, int value);

// Is value present in list? If so true.
bool list_contains(list_t *list, int value);

/*
 *     Main
 */
int main() {
    list_t *list = list_new();
    EQUALS(list->head, NULL);
    EQUALS(list->last, NULL);
    EQUALS(list->length, 0);

    list_append(list, 1);
    EQUALS(list->length, 1);
    EQUALS(list_get(list, 0), 1);

    list_append(list, 2);
    list_append(list, 3);
    list_append(list, 4);
    EQUALS(list->length, 4);

    EQUALS(list_get(list, 0), 1);

    for (int i = 0; i < list->length; i++) {
        printf("%d ", list_get(list, i));      // 1 2 3 4
    }
    printf("\n");

    list_shift(list, 7);                  // Shift in 7 from left
    for (int i = 0; i < list->length; i++) {
        printf("%d ", list_get(list, i));    // 7 1 2 3
    }
    printf("\n");

    list_shift(list, 8);                    // Shift in 8 from left
    for (int i = 0; i < list->length; i++) {
        printf("%d ", list_get(list, i));   // 8 7 1 2
    }
    printf("\n");

    // Searching
    EQUALS(list_contains(list, 1), true);
    EQUALS(list_contains(list, 2), true);
    EQUALS(list_contains(list, 3), false);
    EQUALS(list_contains(list, 8), true);
}

// ------------ Implementations ----------------------

list_t *list_new() {
    // Allocate the empty list
    list_t *l = (list_t *) malloc(sizeof(list_t));
    if (l == NULL) {
        perror("Couldn't create list");
        exit(EXIT_FAILURE);
    }
    l->head = NULL;
    l->last = NULL;
    l->length = 0;
    return l;
}

void list_append(list_t *list, int value) {
    node_t *n = (node_t *) malloc(sizeof(node_t));
    if (n == NULL) {
        perror("Couldn't append");
        exit(EXIT_FAILURE);
    }
    n->value = value;

    if (list->length == 0) {  // Special case empty list
        n->prev = NULL;
        list->head = n;
        list->last = n;
    } else {
        n->prev = list->last;
        list->last = n;
    }
    list->length++;
}

// No error check for index!
int list_get(list_t *list, int index) {
    // TODO
    return -1;
}

// Shifting values (not nodes)
void list_shift(list_t *list, int value) {
    node_t *pos = list->last;
    while (pos->prev != NULL) {
        pos->value = pos->prev->value;
        pos = pos->prev;
    }
    pos->value = value;
}

bool list_contains(list_t *list, int value) {
    // TODO
    return false;
}



