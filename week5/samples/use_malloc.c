/*
 *    Dynamic memory allocation
 *
 *    Using the standard malloc function to get heap memory
 *    I.e. program may use more memory than declared by the variables
 */

#include<stdio.h>
#include <stdlib.h>

#define SIZE 5

typedef struct Point_2D {
    double x;
    double y;
} point2D_t;

int main(void) {

    // ----------- Variables -------------------

    int i = 2;   // This variable lives on the stack.
                 // Variable destroyed, memory returned when function finished,


    // Allocate one int (silly, just demo).
    // The memory comes from the heap! NOT the stack ...
    // Address to the (nameless) int returned so must use pointer variable
    int *j = malloc(1 * sizeof(int));  //Call malloc to get memory for one int
    *j = 2;
    printf("%d\n", *j);
    free(j);               // Must release memory (pointed to by j) manually!

    // ------------- Arrays ---------------

    int arr[SIZE];  // Fixed size array (on stack)
    arr[3] = 99;
    printf("%d\n", arr[3]);

    int *ptr = malloc(SIZE * sizeof(int)); // Allocate dynamically from heap
    ptr[3] = 99;                 // Indexing on pointer (ptr is on stack!)
    printf("%d\n", ptr[3]);
    free(ptr);                 // Must release memory manually!

    // -------------- Structures ------------------

    point2D_t p1 = { 1.2, 3.4};  // Structure on stack
    printf("%lf %lf ", p1.x, p1.y);


    point2D_t *p2 = malloc(sizeof(point2D_t)); // Structure on heap must
    p2->x = 4.5;    // The arrow operator!
    p2->y = 6.7;
    printf("%lf %lf ", p2->x, p2->y);

    free(p2);     // Must release memory manually!

    return 0;

}
