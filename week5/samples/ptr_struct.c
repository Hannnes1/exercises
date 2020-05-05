#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
 *   Pointers and structures
 *
 *   NOTE: Definition of arrow operator
 *   s is a struct and m is member of the struct
 *
 *   (*s).m == s->m
 *
 */

typedef struct Point_2D {
    double x;
    double y;
    int rgb[3];               // RGB color
    //struct Point_2D p;     // Not allowed (recursive definition)
    //struct Point_2D *p;    // Ok, but not used here
} point2D_t;


int main(void) {

    double d;
    // Declare and initialize struct variable
    point2D_t pt1 = {1.0, 2.0, {255, 0, 0}};   // Color red

    // --  Memory layout ----------
    printf("%p\n", &pt1);           // Start address to struct
    printf("%d\n", &pt1 == &pt1.x); // Same (dot has higher precedence). Warning different types for pointers!
                                    // cast to (void*) to remove warning
    printf("%p\n", &pt1.y);         // 8 bytes after pt1.x
    printf("%p\n", pt1.rgb);        // 16 bytes after pt1.x (no &, it's an array)

    // ------ Using pointer to structure --------------

    //point2D_t *ptr1 = pt1;   // NO! Name not converted to pointer
    point2D_t *ptr1 = &pt1;    // MUST use &-operator

    point2D_t pt2 = *ptr1;        // Dereference *ptr1 == *&pt1 == pt1
    printf("%d\n", pt2.x == 1);    // Check

    d = (*ptr1).x;                  // First dereference, then dot operator to get members possible but avoid
    printf("%d\n", pt1.x == d);    // Check

    d = ptr1->x;                    // Use arrow operator, same result as above (always use arrow operator!)
    printf("%d\n", pt1.x == d);    // Check

    printf("%d\n", (*ptr1).x == ptr1->x); // Definition of arrow operator

    // --------------------- IO --------------------------

    printf("Input 2 floats (space between) > ");
    scanf("%lf %lf", &ptr1->x, &ptr1->y);            // NOTE: Must use &
    printf("Point is: %f, %f\n", ptr1->x, ptr1->y);

    // ------- Complex use of pointers to structures/arrays ............

    point2D_t pt3 = {1.0, 2.0, {0, 0, 255}};
    point2D_t *ptr2 = &pt3;

    printf("%d\n", ptr2->rgb[2]);   // Print last element of array

    printf("Input red > ");
    scanf("%d", &ptr2->rgb[0]);    // Read into first array element


    // --------- Even more complex ------------------------

    int *rgp_ptr = ptr1->rgb;     // Ok. Use pointer to get array. Array converted to address.
    int r = ptr1->rgb[0];        //  Ok. Use pointer to access element in array

    point2D_t *pts[] = {ptr1};  // Array of pointers to point2D_t
    point2D_t **pts_ptr = pts;  // A pointer to array of pointers to point2D_t

    printf("%lf\n", pts_ptr[0]->rgb[0]); // Indexing on pointer, then arrow on structure, then indexing on array.


    return 0;
}

