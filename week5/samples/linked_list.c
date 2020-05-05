/*
 *
 *    A simply directed linked list
 *
 *    NOTE: Nodes connected with a "prev" pointer, NOT a "next" as in the book!
 *          We also have a pointer to last node (simplifies)
 *
 *               list_t      node_t       node_t     node_t
 *             |-------|    |-------|   |-------|   |-------|
 *             | head -|--->|       |   |       |   |       |
 *    list --> |       | |--|-prev  |<--|-prev  |<--|- prev |
 *             |       |    |_______|   |_______|   |_______|<---|
 *             | last -|-----------------------------------------|
 *             |_______|
 *
 *
 *    NOTE: No error checks here
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
    struct Node *prev;   // Point to previous node. Should be NULL for first node
} node_t;                // Shorter name (typedef:ed)

// Type for the list (start of a chain of nodes)
typedef struct List {
    int length;
    node_t *head;   // Pointing at first node
    node_t *last;   // Pointing at last node
} list_t;           // Shorter name

/*
 *    Building the list by hand (later we should use methods)
 *
 *    HINT: Use paper and pen and try to draw the image of the below!!!
 */
int main(void ) {
    // Allocate the list
    list_t *list = malloc(sizeof(list_t));
    if (list == NULL) {
        perror("Couldn't create list");
        exit(EXIT_FAILURE);
    }
    // Allocate head node and set value
    node_t *n1 = malloc(sizeof(node_t));
    if (n1 == NULL) {
        perror("Couldn't append");
        exit(EXIT_FAILURE);
    }
    n1->value = 1;
    n1->prev = NULL;

    // Connect node n1 to list
    list->head = n1;
    list->last = n1;
    list->length++;

    // Allocate next node and set value
    node_t *n2 = malloc(sizeof(node_t));
    if (n2 == NULL) {
        perror("Couldn't append");
        exit(EXIT_FAILURE);
    }
    n2->value = 2;

    // Connect n2 to list
    n2->prev = n1;
    list->last = n2;
    list->length++;

    node_t *pos = list->last;   //Auxiliary pointer for position
    while( pos != NULL){
        printf("%d ", pos->value); // Print value
        pos = pos->prev;            // Move position to previous
    }

    return 0;
}







