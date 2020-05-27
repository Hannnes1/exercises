#include <stdio.h>
#include <math.h>

int main() {
    int r = 0;

    //In
    printf("Input radius of sphere (m) > ");
    scanf("%d", &r);

    double vol = 4.0/3 * M_PI * pow(r, 3);

    printf("Volume of sphere = %f", vol);

}

