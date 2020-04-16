/*
 *  Using enums (for small set of values)
 *  Makes code easier to understand
 *  (but no type safety, enums are fancier integers (like bool))
 *
 */

#include<stdio.h>

// Enumeration type for directions
// Sadly the values NORTH, EAST, etc are in fact integer values
// So easy to misuse
enum Dir {
    NORTH, EAST, SOUTH, WEST
};

// Annoying to have to use "enum" in declarations
// Simplify by using a typedef
typedef enum Dir dir_t;

int main(void) {
    enum Dir d = NORTH;    // Puuuuiiihhhh, tiresome ...

    dir_t d1 = NORTH;      // ..better (typedef:ed no enum needed)
    dir_t d2 = EAST;
    dir_t d3;

    printf("%d\n", d1);  // As noted just disguised integers
    printf("%d\n", d2);

    // ----------- Assign and compare ----------------------
    
    d1 = d2;             // Assign ok!
    if( d1 == d3 ){
        // Possible, like comparing int's
    }
    
    d2 = -1;             // BAD, but possible! Not a valid direction

    // ------------- IO --------------------
    
    dir_t d4;
    printf("Please input direction (0-4) > ");
    scanf("%d", &d4);
    
    return 0;
}