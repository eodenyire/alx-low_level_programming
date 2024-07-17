#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stddef.h>
#include "stddef.h"
#include "stdio.h"
#include "math.h"
#include <stdio.h>
#include <stdlib.h>


int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int int_index(int *array, int size, int (*cmp)(int));
int interpolation_search(int *array, size_t size, int value);

#endif
