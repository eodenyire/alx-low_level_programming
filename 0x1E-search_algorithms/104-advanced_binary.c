#include <stdio.h>
#include "search_algos.h"

int exponential_search(int *array, size_t size, int value) {
    if (array == NULL || size == 0) {
        return -1;
    }
    if (array[0] == value) {
        return 0;
    }
    size_t bound = 1;
    while (bound < size && array[bound] <= value) {
        printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
        bound *= 2;
    }
    size_t left = bound / 2;
    size_t right = fmin(bound, size - 1);

    printf("Searching in array:");
    for (size_t i = left; i <= right; i++) {
        printf("%s%d", (i == left) ? " " : ", ", array[i]);
    }
    printf("\n");

    return binary_search(array + left, right - left + 1, value);
}
