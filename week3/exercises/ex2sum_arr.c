/*
 *
 *   Sum elements in array introducing arrays
 *
 *   Samples:
 *   - arrays.c
 */

#include<stdio.h>

#define SIZE 5

int main(void) {
    int arr[SIZE];

    printf("Program to sum an array of size 5\n");

    // TODO Input

    printf("Array is : ");
    for (int i = 0; i < SIZE; i++) {
        if(i==0) {
            printf("[ %d", arr[i]);
        }else{
            printf(", %d", arr[i]);
        }
    }
    printf(" ]\n");


    // TODO Sum arr


    //printf("Sum of elements is: %d\n", sum);

    return 0;
}