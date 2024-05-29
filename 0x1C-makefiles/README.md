# 0x1C. C - Makefiles

## Description

This project is part of the ALX Software Engineering Program, focused on the use of Makefiles in C programming. Makefiles help automate the build process, making it easier to compile and manage dependencies in large projects.

## Learning Objectives

By the end of this project, you should be able to explain:

- What are `make` and Makefiles
- When, why, and how to use Makefiles
- What are rules and how to set and use them
- The difference between explicit and implicit rules
- The most common/useful rules in Makefiles
- How to set and use variables in Makefiles

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- OS: Ubuntu 20.04 LTS
- Version of gcc: 9.3.0
- Version of make: GNU Make 4.2.1
- All files should end with a new line
- A `README.md` file, at the root of the folder of the project, is mandatory

## Project Tasks

### 0. make -f 0-Makefile

Create your first Makefile.

- Name of the executable: `school`
- Rules: `all`
- The `all` rule builds your executable
- No variables

### 1. make -f 1-Makefile

Create a Makefile with the following requirements:

- Name of the executable: `school`
- Rules: `all`
- The `all` rule builds your executable
- Variables: `CC`, `SRC`

### 2. make -f 2-Makefile

Create a more useful Makefile.

- Name of the executable: `school`
- Rules: `all`
- The `all` rule builds your executable
- Variables: `CC`, `SRC`, `OBJ`, `NAME`
- The `all` rule should recompile only the updated source files
- No list of all `.o` files allowed

### 3. make -f 3-Makefile

Create a complete Makefile with the following requirements:

- Name of the executable: `school`
- Rules: `all`, `clean`, `oclean`, `fclean`, `re`
  - `all`: builds your executable
  - `clean`: deletes all Emacs and Vim temporary files along with the executable
  - `oclean`: deletes the object files
  - `fclean`: deletes all Emacs and Vim temporary files, the executable, and the object files
  - `re`: forces recompilation of all source files
- Variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`
- The `all` rule should recompile only the updated source files
- Cleaning rules should never fail
- No list of all `.o` files allowed

### 4. A complete Makefile

Create a Makefile with the following additional requirements:

- Variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`, `CFLAGS`
- Use favorite compiler flags: `-Wall -Werror -Wextra -pedantic`

### 5. Island Perimeter

Technical interview preparation task.

- Create a function `def island_perimeter(grid):` that returns the perimeter of the island described in `grid`.

### 6. make -f 100-Makefile (Advanced)

Create a Makefile with additional constraints and requirements.

## Author

**Emmanuel Odenyire Anyira**

- Student at ALX Africa, taking the ALX Software Engineering Program
- Senior Data Analytics Engineer at Safaricom PLC in Kenya
- Graduate student at The Cooperative University of Kenya, pursuing a Master of Science in Data Science

**Contact Information:**

- Email: eodenyire@gmail.com
- LinkedIn: [Emmanuel Odenyire Anyira](https://www.linkedin.com/in/emmanuelodenyire/)

For collaborations, please reach out via email or LinkedIn.
