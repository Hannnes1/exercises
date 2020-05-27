#include <stdio.h>

int sum_mod(const int *arr, int size, int n);

int main() {

    int arr[] = {3, 2, 5, 7, 6, 3, 8, 2, 1, 4};

    printf("%d\n", sum_mod(arr, 10, 2));
    printf("%d\n", sum_mod(arr, 10, 3));
    printf("%d\n", sum_mod(arr, 10, 7));

}

int sum_mod(const int *arr, int size, int n) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % n == 0) {
            sum += arr[i];
        }
    }
    return sum;
}