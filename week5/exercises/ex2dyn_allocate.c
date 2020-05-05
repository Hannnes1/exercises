#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
 *  Dynamic allocation of array
 *
 *  See:
 *  - use_malloc.c (variables and arrays only)
 */

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<memory.h>

int main(void) {
    int n_elems;
    printf("How many elements > ");
    scanf("%d", &n_elems);

    int *ptr = NULL;  // TODO Allocate array

    for( int i = 0 ; i < n_elems; i++){
        printf("Input %d >  ", i);
        scanf("%d", &ptr[i]);
    }

    printf("Array is ");
     for( int i = 0 ; i < n_elems; i++){
        printf("%d  ", ptr[i]);
    }

    free(ptr);  // Not really needed here but in general.

    return 0;

}

