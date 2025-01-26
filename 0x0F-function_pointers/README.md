# 0x0F. C - Function pointers

## Overview

This project focuses on understanding and implementing function pointers in C. Function pointers are variables that store the address of a function, enabling dynamic function calls and enhancing code flexibility.

## Learning Objectives

By the end of this project, you should be able to:

- Explain what function pointers are and how to use them.
- Understand what a function pointer holds.
- Identify where a function pointer points to in virtual memory.

## Project Requirements

- **Allowed Editors:** vi, vim, emacs
- **Compilation:** All files will be compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- **File Endings:** All files should end with a new line.
- **Code Style:** Your code should adhere to the [Betty style](https://github.com/holbertonschool/Betty/wiki).
- **Global Variables:** You are not allowed to use global variables.
- **Function Limits:** No more than 5 functions per file.
- **Standard Library Functions:** The only C standard library functions allowed are `malloc`, `free`, and `exit`. Functions like `printf`, `puts`, `calloc`, `realloc`, etc., are forbidden.
- **_putchar Function:** You are allowed to use `_putchar`. You don't have to push `_putchar.c`; we will use our file. If you do, it won't be taken into account.
- **Header Files:** All your header files should be include-guarded.

## Tasks

### 0. What's my name

Write a function that prints a name.

**Prototype:** `void print_name(char *name, void (*f)(char *));`

### 1. If you spend too much time thinking about a thing, you'll never get it done

Write a function that executes a function given as a parameter on each element of an array.

**Prototype:** `void array_iterator(int *array, size_t size, void (*action)(int));`

### 2. To hell with circumstances; I create opportunities

Write a function that searches for an integer.

**Prototype:** `int int_index(int *array, int size, int (*cmp)(int));`

### 3. A goal is not always meant to be reached; it often serves simply as something to aim at

Write a program that performs simple operations.

**Usage:** `calc num1 operator num2`

**Operators:**

- `+`: addition
- `-`: subtraction
- `*`: multiplication
- `/`: division
- `%`: modulo

**Exit Status:**

- If the number of arguments is wrong, print `Error`, followed by a new line, and exit with the status 98.
- If the operator is none of the above, print `Error`, followed by a new line, and exit with the status 99.
- If the user tries to divide (`/` or `%`) by 0, print `Error`, followed by a new line, and exit with the status 100.

## File Structure

- `0-print_name.c`: Function that prints a name.
- `1-array_iterator.c`: Function that executes a function given as a parameter on each element of an array.
- `2-int_index.c`: Function that searches for an integer.
- `3-main.c`: Main function for the simple operations program.
- `3-op_functions.c`: Functions for the simple operations.
- `3-get_op_func.c`: Function that selects the correct function to perform the operation.
- `3-calc.h`: Header file containing function prototypes and data structures.

## Compilation and Examples

To compile and test the programs:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_name.c -o a
./a
```

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-array_iterator.c -o b
./b
```

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-int_index.c -o c
./c
```

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-op_functions.c 3-get_op_func.c -o calc
./calc 1 + 1
```


### Acknowledgements
All work contained in this project was completed as part of the curriculum for the ALX Africa Software Engineering program, built upon Holberton School projects and materials. Holberton School is a campus-based full-stack software engineering program that prepares students for careers in the tech industry using project-based peer learning.

### For more information, visit these links:

ALX Africa
Holberton School

