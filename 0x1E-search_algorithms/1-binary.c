#include <stdio.h>
#include "search_algos.h"

int binary_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1;
    }
    size_t left = 0, right = size - 1;
    while (left <= right) {
        printf("Searching in array:");
        for (size_t i = left; i <= right; i++) {
            printf("%s%d", (i == left) ? " " : ", ", array[i]);
        }
        printf("\n");

        size_t mid = left + (right - left) / 2;
        if (array[mid] == value) {
            return mid;
        } else if (array[mid] < value) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

