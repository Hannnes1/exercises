/*
*
 *    Implementation of API
 *
 *    A simply directed linked list
*
*           struct List   struct Node
*             |-------|    |-------|   |-------|   |-------|
*             | head -|--->|       |   |       |   |       |
*    list --> |       | |--|-prev  |<--|-prev  |<--|- prev |
*             |       |    |_______|   |_______|   |_______|<---|
*             | last -|-----------------------------------------|
*             |_______|
*
*/
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "ex5list_module.h"     // Included here to check function declarations are the same as definitions

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
    node_t *pos = list->last;
    //Traverse until the correct index is reached
    for (int i = list->length - 1; i > index; i--) {
        pos = pos->prev;
    }
    return pos->value;
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
    node_t *pos = list->last;
    while (pos != NULL) {
        if (pos->value == value) {
            return true;
        }
        pos = pos->prev;
    }
    return false;
}