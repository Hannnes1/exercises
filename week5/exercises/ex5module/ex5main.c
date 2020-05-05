/*
 *    Testing the linked list module.
 */

#include <stdio.h>
#include <stdbool.h>
#include "ex5list_module.h"

// Test macros
#define EQUALS(v1, v2) printf( (v1) == (v2) ? "true\n" : "false\n")

void main() {
    // TODO Uncomment and run when module implemented.
    /*
    list_t *list = list_new();
    EQUALS(list->head, NULL);
    EQUALS(list->last, NULL);
    EQUALS(list->length, 0 );

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

    list_shift(list, 7);
    for (int i = 0; i < list->length; i++) {
        printf("%d ", list_get(list, i));    // 7 1 2 3
    }
    printf("\n");

    list_shift(list, 8);
    for (int i = 0; i < list->length; i++) {
        printf("%d ", list_get(list, i));   // 8 7 1 2
    }
    printf("\n");

    // Searching
    EQUALS(list_contains(list, 1), true);
    EQUALS(list_contains(list, 2), true);
    EQUALS(list_contains(list, 3), false);
    EQUALS(list_contains(list, 8), true);
     */

}



