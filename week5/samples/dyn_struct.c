/*
 *    Dynamic allocation of structures
 *
 *    See: https://en.wikipedia.org/wiki/C_dynamic_memory_allocation
 */

#include<stdio.h>
#include <stdlib.h>

typedef struct Point_2D {
    double x;
    double y;
} point2D_t;


typedef struct Line_2D {
    point2D_t start;
    point2D_t end;
} line2D_t;


// Dynamically create a point
point2D_t *point_new(double x, double y);

void plot_point(point2D_t *p);

int main(void) {

    point2D_t *p1 = point_new(1, 2);   // Get a point at runtime

    plot_point(p1);  // Use it
    p1->x = 4.5;
    p1->y = 6.7;
    plot_point(p1);

    free(p1);    // Must handle memory manually!

    return 0;
}


point2D_t *point_new(double x, double y) {
    point2D_t *p2 = malloc(sizeof(point2D_t));
    p2->x = x;
    p2->y = y;
    return p2;  // Local variable p2 gone but
                // not allocated memory. Ok to return address to
}

void plot_point(point2D_t *p) {
    printf("%lf %lf\n", p->x, p->y);
}
