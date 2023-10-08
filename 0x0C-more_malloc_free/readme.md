# 0x0C. C - More malloc, free

## Description
This repository contains solutions to the tasks of the "0x0C. C - More malloc, free" project, part of ALX School's curriculum.

The project focuses on concepts like memory allocation using `malloc`, `calloc`, and `realloc`, as well as dealing with dynamic memory and pointer manipulation.

## List of Functions
1. **`malloc_checked`** - Allocates memory using malloc. Terminates the process with status 98 if malloc fails.
   
2. **`string_nconcat`** - Concatenates two strings and returns a newly allocated space in memory containing the concatenation of s1 followed by the first n bytes of s2.

3. **`_calloc`** - Allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory. The memory is set to zero.

4. **`array_range`** - Creates an array of integers containing all the values from min (included) to max (included), ordered from min to max.

## Files
1. `0-malloc_checked.c`
2. `1-string_nconcat.c`
3. `2-calloc.c`
4. `3-array_range.c`

## Usage
- Clone this repository using `git clone`.
- Compile the C files using your preferred C compiler (e.g., gcc) with the provided main files.
- Run the executables.

## Example
```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-malloc_checked.c -o malloc_checked
$ ./malloc_checked
0x1e39010
0x1e39830
0x7f31f6c19010
$ echo $?
98

