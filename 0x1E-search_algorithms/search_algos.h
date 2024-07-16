#ifndef FUNCTION_POINTER_H
#define FUNCTION_POINTER_H
#include <stddef.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int int_index(int *array, int size, int (*cmp)(int));


#endif
