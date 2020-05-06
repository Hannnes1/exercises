/*
 *    Public API for the linked list module
 *
 */
#include<stdbool.h>

#ifndef LIST_MODULE_H
#define LIST_MODULE_H

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

// ----------Public API for a linked list -------------

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


#endif  // LIST_MODULE_H
