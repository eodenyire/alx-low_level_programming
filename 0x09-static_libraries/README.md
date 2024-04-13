# ALX Low Level Programming - Static Libraries

This repository contains solutions for the tasks in the ALX Low Level Programming sprint related to static libraries.

## About

In this project, I learned about static libraries, how to create them, and how to use them. I practiced creating static libraries using `ar`, `ranlib`, and `nm`.

## Tasks

### 0. A library is not a luxury but one of the necessities of life

**Files:** `libmy.a`, `main.h`

**Description:** Created a static library named `libmy.a` containing various functions listed below. The prototypes for these functions are provided in `main.h`.

- `int _putchar(char c);`
- `int _islower(int c);`
- `int _isalpha(int c);`
- `int _abs(int n);`
- `int _isupper(int c);`
- `int _isdigit(int c);`
- `int _strlen(char *s);`
- `void _puts(char *s);`
- `char *_strcpy(char *dest, char *src);`
- `int _atoi(char *s);`
- `char *_strcat(char *dest, char *src);`
- `char *_strncat(char *dest, char *src, int n);`
- `char *_strncpy(char *dest, char *src, int n);`
- `int _strcmp(char *s1, char *s2);`
- `char *_memset(char *s, char b, unsigned int n);`
- `char *_memcpy(char *dest, char *src, unsigned int n);`
- `char *_strchr(char *s, char c);`
- `unsigned int _strspn(char *s, char *accept);`
- `char *_strpbrk(char *s, char *accept);`
- `char *_strstr(char *haystack, char *needle);`

### 1. Without libraries what have we? We have no past and no future

**File:** `create_static_lib.sh`

**Description:** This Bash script creates a static library called `liball.a` from all the `.c` files present in the current directory.

## Author

Emmanuel Odenyire Anyira, a student at ALX Africa, taking the ALX Software Engineering Program.

- Email: eodenyire@gmail.com
- LinkedIn: [Emmanuel Odenyire Anyira](https://www.linkedin.com/in/emmanuelodenyire/)

## Repository

[GitHub Repository](https://github.com/eodenyire/alx-low_level_programming)

