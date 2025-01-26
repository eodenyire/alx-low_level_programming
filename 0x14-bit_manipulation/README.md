# 0x14. C - Bit manipulation

This project is part of the ALX Software Engineering curriculum. It focuses on the basics of bit manipulation using the C programming language. The goal of this project is to understand how to work with bits and apply bitwise operators to solve various problems.

## Learning Objectives

By the end of this project, you should be able to:

- Understand how to manipulate bits and use bitwise operators.
- Write functions to convert binary numbers to unsigned integers, print binary representations, and manipulate specific bits in a number.
- Implement various operations such as setting and clearing bits, getting the value of a bit at a given index, and flipping bits between two numbers.

## Resources

### Read or watch:

- Operators in C - Part 6
- Operators in C - Part 7 (Bitwise Operators-II)
- Bitwise Operators 1: The AND Operation
- Bitwise Operators 2: The OR Operation
- Bitwise Operators 3: The XOR Operation
- Bitwise Operators 4: The Logical Shift Operation
- Bit Manipulation
- Bitwise Operators
- Google
- YouTube

## Tasks

### 0. Convert a binary number to an unsigned int

Write a function that converts a binary number to an unsigned int.

```c
unsigned int binary_to_uint(const char *b);
```
## 1. Print the binary representation of a number

Write a function that prints the binary representation of a number.

### Input
An unsigned long integer `n`.

### Output
The binary representation of `n` (printed to the standard output).

```c
void print_binary(unsigned long int n);
```

## 2. Get the value of a bit at a given index

Write a function that returns the value of a bit at a given index.

### Input
A number `n` and an index `index`.

### Output
The value of the bit at the specified index or -1 if an error occurs.

```c
int get_bit(unsigned long int n, unsigned int index);
```

## 3. Set the value of a bit to 1 at a given index

Write a function that sets the value of a bit to 1 at a given index.

### Input
A pointer to a number `n` and an index `index`.

### Output
1 if it worked, or -1 if an error occurred.

```c
int set_bit(unsigned long int *n, unsigned int index);
```

## 4. Set the value of a bit to 0 at a given index

Write a function that sets the value of a bit to 0 at a given index.

### Input
A pointer to a number `n` and an index `index`.

### Output
1 if it worked, or -1 if an error occurred.

```c
int clear_bit(unsigned long int *n, unsigned int index);
```

## 5. Return the number of bits to flip to get from one number to another

Write a function that returns the number of bits you would need to flip to get from one number to another.

### Input
Two unsigned long integers `n` and `m`.

### Output
The number of bits to flip to convert `n` to `m`.

```c
unsigned int flip_bits(unsigned long int n, unsigned long int m);
```

## 6. Endianness (Advanced)

Write a function that checks the endianness of the system.

### Output
1 if the system is little-endian, 0 if it is big-endian.

```c
int get_endianness(void);
```

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on Ubuntu 20.04 LTS using gcc with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- All files should end with a new line.
- Code should be written in Betty style (checked using `betty-style.pl` and `betty-doc.pl`).
- Global variables are not allowed.
- No more than 5 functions per file.
- Allowed C standard library functions: `malloc`, `free`, and `exit`. Other standard library functions like `printf`, `puts`, `calloc`, and `realloc` are forbidden.
- You are allowed to use `_putchar`.
- Prototypes for all functions and the `_putchar` function should be included in the `main.h` header file, which should be included in all your `.c` files.
- All header files should be include-guarded.

---

## GitHub Repository

- **GitHub repository**: alx-low_level_programming
- **Directory**: 0x14-bit_manipulation
- **Files**:
  - `0-binary_to_uint.c`
  - `1-print_binary.c`
  - `2-get_bit.c`
  - `3-set_bit.c`
  - `4-clear_bit.c`
  - `5-flip_bits.c`
  - `main.h`

---

## Authors

- Emmanuel Odenyire Anyira - Software Engineer  
  ALX Software Engineering Program

---

## Acknowledgments

- ALX Africa for the opportunity to improve software engineering skills.
- The resources and support provided throughout the project.


