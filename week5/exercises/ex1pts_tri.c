/*
 *    Using structs and functions with struct parameters
 *
 *    NOTE: Structs passed as address to (i.e. pointer to struct)
 *
 *  See:
 *  - struct.c
 *  - ptr_struct.c
 *  - struct_func.c
 *
 */
#include<stdio.h>
#include<stdlib.h>
#include <math.h>

#define EPS_EQUALS(v1, v2) printf(fabs((v1)-(v2)) < 0.0001 ? "true\n" : "false\n")

// Structure for a point in 3D
typedef struct Point3D {
    double x;
    double y;
    double z;
} point3d_t;

// Structure for a triangle in 3d
typedef struct Triangle3D {
    point3d_t pts[3];   // Lines between points implicit
} triangle3d_t;

// Distance between two points
double distance(point3d_t *p1, point3d_t *p2);

// Area of triangle formed by three points
double area(triangle3d_t *triangle);

int main() {
    point3d_t p1 = {0, 0, 0};
    point3d_t p2 = {1, 0, 0};
    point3d_t p3 = {0, 1, 0};
    point3d_t p4 = {0, 0, 1};
    point3d_t p5 = {1, 1, 1};

    EPS_EQUALS(distance(&p1, &p2), 1); // Structures always passed ass addresses
    EPS_EQUALS(distance(&p1, &p3), 1);
    EPS_EQUALS(distance(&p1, &p4), 1);
    EPS_EQUALS(distance(&p1, &p5), sqrt(3));

    triangle3d_t triangle1 = {p1, p2, p3};
    EPS_EQUALS(area(&triangle1), 0.5);
    triangle3d_t triangle2 = {p1, p2, p4};
    EPS_EQUALS(area(&triangle2), 0.5);

    return 0;
}

// Use arrow operator (->) to access members of structure
double distance(point3d_t *p1, point3d_t *p2) {
    // TODO
    return -1;
}

// Use Herons formula
double area(triangle3d_t *triangle) {
    double s1 = distance(&triangle->pts[0], &triangle->pts[1]);

    // TODO

    return -1;
}
