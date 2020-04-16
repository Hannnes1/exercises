/*
 *
 *  Finding any common sequences in arrays
 *  This is exercising functional decomposition
 *
 *  Samples:
 *
 */
#include<stdio.h>
#include <stdbool.h>
#include <memory.h>

#define ARR_EQUALS(a1, a2) printf( memcmp(a1, a2, sizeof(a1)) == 0 ? "true\n" : "false\n")

bool is_equal_seq(const int a[], int aStart, const int b[], int bStart, int len);

void copy_seq(  int dest[], const int src[], int start, int end);

void common_seq(int result[], const int a[], const int b[], int size, int seq_len);

void clear_result(int result[], int size);

int main(void) {
    int s1[] = {3, 1, 2, 3, 7, 1, 5};
    int s2[] = {9, 4, 7, 1, 2, 6, 7};
    int s3[] = {1, 2, 3, 4, 7, 3, 8};
    int s4[] = {3, 7, 1, 5, 3, 2, 5};
    int size = 7;
    int result[size];

    int expected1[] = {1, 2, 0, 0, 0, 0, 0};
    common_seq(result, s1, s2, size, 2);  // s1 and s2 have 1, 2 common
    ARR_EQUALS(result, expected1);

    int expected2[] = {0, 0, 0, 0, 0, 0, 0};
    common_seq(result, s1, s2, size, 3); // s1 and s2 have no common of length 3
    ARR_EQUALS(result, expected2);

    int expected3[] = {1, 2, 3, 0, 0, 0, 0};
    common_seq(result, s1, s3, size, 3); // s1 and s3 have 1,2,3, common
    ARR_EQUALS(result, expected3);

    int expected4[] = {3, 7, 1, 5, 0, 0, 0};
    common_seq(result, s1, s4, size, 4); // s1 and s4 have 3,7,1,5 common
    ARR_EQUALS(result, expected4);

}

void common_seq(int result[], const int a[], const int b[], int size, int seq_len) {
   // TODO
}

void copy_seq(int dest[], const int src[], int start, int end) {
    // TODO
}

bool is_equal_seq(const int a[], int aStart, const int b[], int bStart, int seq_len) {
   // TODO
}

void clear_result(int result[], int size) {
    for (int i = 0; i < size; i++) {
        result[i] = 0;
    }
}