/*
 *
 *    Functions for a simple directed linked list
 *
 *    NOTE: Nodes connected with a "prev" pointer, NOT a "next" as in the book!
 *          We also have a pointer to last node (simplifies)
 *
 *           struct List   struct Node
 *             |-------|    |-------|   |-------|   |-------|
 *             | head -|--->|       |   |       |   |       |
 *    list --> |       | |--|-prev  |<--|-prev  |<--|- prev |
 *             |       |    |_______|   |_______|   |_______|<---|
 *             | last -|-----------------------------------------|
 *             |_______|
 *
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
} node_t;                // Shorter name for "struct Node" is "node_t"

// Type for the list (start of a chain of nodes)
typedef struct List {
    int length;
    node_t *head;   // Pointing at first node
    node_t *last;   // Pointing at last node
} list_t;           // Shorter name

// Create new empty list
list_t *list_new();

// Add a value last in list
void list_append(list_t *list, int value);

// Print list reversed
void print_reverse(list_t *list);

/*
 *      Use function to manipulate the list
 */
int main(void) {

    list_t *list = list_new(); // Allocate the list
    print_reverse(list);

    list_append(list, 1); // Add value 1
    print_reverse(list);

    printf("\n");

    list_append(list, 2);
    list_append(list, 3);
    list_append(list, 4);
    print_reverse(list);

    return 0;
}

list_t *list_new() {
    list_t *list = malloc(sizeof(list_t));
    if (list == NULL) {
        perror("Couldn't create list");
        exit(EXIT_FAILURE);
    }
    list->head = NULL;
    list->last = NULL;
    list->length = 0;
    return list;
}

void list_append(list_t *list, int value) {
    // Allocate head node and set value
    node_t *n = malloc(sizeof(node_t));
    if (n == NULL) {
        perror("Couldn't append");
        exit(EXIT_FAILURE);
    }
    n->value = value;

    if (list->length == 0) {  // If list empty
        n->prev = NULL;
        list->head = n;
        list->last = n;
    } else {
        n->prev = list->last;
        list->last = n;
    }
    list->length++;
}



// Simple print
void print_reverse(list_t *list) {
    node_t *pos = list->last; // Use a position pointer
    while (pos != NULL) {
        printf("%d ", pos->value);
        pos = pos->prev;
    }
}







