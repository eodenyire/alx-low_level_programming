# ALX Software Engineering Program: 0x12 - Singly Linked Lists in C

## Project Overview

The ALX Software Engineering Program's 0x12 project on Singly Linked Lists in C focuses on understanding and implementing linked lists—a fundamental data structure in computer science. This project aims to teach when and why to use linked lists versus arrays, and how to build and utilize linked lists effectively.

## Concepts Covered

- Data Structures, specifically Singly Linked Lists.

## Learning Objectives

By the end of this project, you should be able to:

- Understand the advantages and disadvantages of linked lists compared to arrays.
- Learn how to construct and manipulate linked lists in C.

## Requirements

- **Allowed Editors**: vi, vim, emacs.
- **Compilation Environment**: Ubuntu 20.04 LTS using gcc with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.

### Coding Standards

- All files must end with a new line.
- A `README.md` file is mandatory at the root of the project folder.
- Code should adhere to the [Betty style](https://github.com/holbertonschool/Betty/wiki/Betty-Style), checked using `betty-style.pl` and `betty-doc.pl`.
- Global variables are not allowed.
- No more than five functions per file.
- Only `malloc`, `free`, and `exit` are permitted from the C standard library; functions like `printf`, `puts`, `calloc`, and `realloc` are forbidden.
- The `_putchar` function is allowed; you don't need to push `_putchar.c` as it will be provided.
- Function prototypes and the `_putchar` prototype should be included in a header file named `lists.h`, which must be pushed to the repository.
- All header files should be include-guarded.

## Data Structure

The project utilizes the following data structure for the linked list:

```c
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

# ALX Software Engineering Program: 0x12 - Singly Linked Lists in C

## Tasks

1. **Print List**: Write a function that prints all the elements of a `list_t` list.
2. **List Length**: Write a function that returns the number of elements in a `list_t` list.
3. **Add Node**: Write a function that adds a new node at the beginning of a `list_t` list.
4. **Add Node at End**: Write a function that adds a new node at the end of a `list_t` list.
5. **Free List**: Write a function that frees a `list_t` list.
6. **Before Main**: Write a function that prints a sentence before the main function is executed.
7. **Assembly Code**: Write a 64-bit program in assembly that prints "Hello, Holberton", followed by a new line.

## Additional Resources

- **Linked Lists**: Understanding linked lists is crucial for this project. You can find more information on linked lists through various online resources.
  - [Google](https://www.google.com)
  - [YouTube](https://www.youtube.com)

## Quiz Questions

1. **Arrays vs. Linked Lists**: Select all true statements.
2. **Tail of a Linked List**: What’s the “tail” of a linked list?
3. **Node Definition**: What’s a node? (Select all possible answers.)
4. **Head of a Linked List**: What’s the “head” of a linked list?
5. **Traversal Direction**: In a singly linked list, what are possible directions to traverse it? (Select all possible answers.)

Please ensure you validate all quiz questions before proceeding to the project tasks.


