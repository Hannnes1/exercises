#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
 *  Structs are used for compound data, grouping variables of possible
 *  different types together as a unit
 *  A struct should capture some concept (not just any random variables bundled)
 */

// Declare and typedef at once (Concept of a 2D point)
typedef struct Point_2D {
    double x;
    double y;
} point2D_t;  // Shorter name  (typedef the structure)


typedef struct Line_2D {  // (Concept of a 2D point)
    point2D_t start;   // Uses other structure as member
    point2D_t end;
} line2D_t;


int main(void) {
    
    // Declare struct variables
    point2D_t pt1;      
    point2D_t pt2 = {1, 2};   // Possible to initialize

    //printf("x is %???\n", pt2);  // Can't print full struct
    printf("x is %f\n", pt2.x);   // Access using dot operator

    line2D_t l1 = {{1, 2},
                   {3, 4}};

    // ---------- Access individual members ----------

    pt1.x = 4.0;      // Using dot operator
    pt1.y = pt2.y;

    // *** NOTE Assign below ***

    // ---------- IO -------------------

    printf("Line is %f %f %f %f\n", l1.start.x, l1.start.y, l1.end.x, l1.end.y); // Multiple dot-operator
    line2D_t l2 = {pt1, pt2};

    printf("Input 2 floats (space between) > ");
    // Can't read full struct, read parts.
    scanf("%lf %lf", &pt1.x, &pt1.y);            // NOTE: Must use &
    printf("Point is: %f, %f\n", pt1.x, pt1.y);

    // ----------- Assign  ----------------------

    pt1 = pt2;             // Possible to assigned all at once!!! (in contrast to arrays)
    printf("Point is: %f, %f\n", pt2.x, pt2.y);

    // pt1 = l1;           // Bad different types

    // ----------- Equality ---------------------

    /*
    if( pt1 == pt2){
        // Bad , can't compare full struct
    }
     */

    if( pt1.y == pt2.y){
        // Ok compare individual members
    }

    // -------- Const structure -------

    const point2D_t pt3 = {1, 2};
    //pt3.x = 5;   // NO!

    return 0;
}

