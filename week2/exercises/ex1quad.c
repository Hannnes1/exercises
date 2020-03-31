/*
 *   Solving a quadratic equation
 *   https://en.wikipedia.org/wiki/Quadratic_formula
 *   https://www.mathsisfun.com/quadratic-equation-solver.html
 *
 *   NOTE: Must link math library. See CMakeLists.txt (it's already done just FYI)
 *
 *   See:
 *   - math.c
 *
 */
#include<stdio.h>
#include<math.h>

int main(void) {

    printf("Program to solve a quadratic equation: ");
    printf("ax² + bx + c = 0\n");

    double a;
    double b;
    double c;

    printf("Please input a > ");
    scanf("%lf", &a);
    printf("Please input b > ");
    scanf("%lf", &b);
    printf("Please input c > ");
    scanf("%lf", &c);

    double discriminant = sqrt(pow(b / (2 * a), 2) - c / a);

    double x1 = -b / (2 * a) + discriminant;
    double x2 = -b / (2 * a) - discriminant;

    if (discriminant > 0) {
        printf("There are two distinct real roots ");
    } else if (discriminant < 0) {
        printf("There are two complex conjugate roots. Can't solve will give nan\n");
    } else {
        printf("There are two equal real roots ");
    }

    printf("x1 = %f, x2 = %f\n", x1, x2);
    return 0;

}