#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
/*
 *  Functions taking structures as parameters
 *
 *  NOTE: Structures always sent by address i.e. pointer to structure
 *
 */
// Define a struct
typedef struct Point_2D {
    double x;
    double y;
} point2D_t;  // Shorter name  (typedef the structure)

// Define and typedef at once
typedef struct Line_2D {
    point2D_t start;   // Uses other structure as member
    point2D_t end;
} line2D_t;


// Calculate length. Taking the address as param.
double length(line2D_t *line);

// Join (logically) two lines
// Possible but inefficient (better use pointers as parameters)
line2D_t join_inefficient(line2D_t line1, line2D_t line2);

// Join line1 and 2 (in a possible strange way)
void join(line2D_t *result, line2D_t *line1, line2D_t *line2);


int main(void) {
    line2D_t l1 = {{0, 0},
                   {1, 1}};
    line2D_t l2 = {{1, 1},
                   {2, 2}};

    printf("%lf\n", length(&l1));  // Send address!

    line2D_t result;
    result = join_inefficient(l1, l2);     // Possible but inefficient!!!
    printf("Line is %f %f %f %f\n", result.start.x, result.start.y,
           result.end.x, result.end.y);

    join(&result, &l1, &l2);              // Far better, use!!!
    printf("Line is %f %f %f %f\n", result.start.x, result.start.y,
           result.end.x, result.end.y);

    return 0;
}

double length(line2D_t *line) {
    // Arrow operator (->) for pointers to structs
    double dx = line->end.x - line->start.x;
    double dy = line->end.y - line->start.y;
    return sqrt(dx * dx + dy * dy);
}

// This is possible but inefficient. Copying a lot of data
line2D_t join_inefficient(line2D_t line1, line2D_t line2) {
    line2D_t result;
    result.start.x = line1.start.x;
    result.start.y = line1.start.y;
    result.end.x = line2.end.x;
    result.end.y = line2.end.y;
    return result;   // Result copied!
}

// The standard way to do it: USE pointer parameters
// NOTE: Can't return pointer to local variable, pass in result
// or dynamically allocate. See use_malloc.c
void join(line2D_t *result, line2D_t *line1, line2D_t *line2) {
    result->start.x = line1->start.x;
    result->start.y = line1->start.y;
    result->end.x = line2->end.x;
    result->end.y = line2->end.y;
}