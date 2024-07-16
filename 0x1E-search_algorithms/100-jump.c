#include <stdio.h>
#include <math.h>
#include "search_algos.h"

int jump_search(int *array, size_t size, int value) {
    if (array == NULL || size == 0) {
        return -1;
    }
    size_t step = sqrt(size);
    size_t prev = 0;

    while (array[fmin(step, size) - 1] < value) {
        printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
        prev = step;
        step += sqrt(size);
        if (prev >= size) {
            return -1;
        }
    }
    printf("Value found between indexes [%lu] and [%lu]\n", prev, step);

    for (size_t i = prev; i < fmin(step, size); i++) {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value) {
            return i;
        }
    }
    return -1;
}
