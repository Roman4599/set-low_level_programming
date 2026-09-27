# More malloc, free

C project on dynamic memory allocation using `malloc`, `free`, and `exit`.

## Files

| File | Description |
| ---- | ----------- |
| `main.h` | Header with the prototypes of all the functions. |
| `0-malloc_checked.c` | Allocates memory using `malloc`; exits with status `98` if it fails. |
| `1-string_nconcat.c` | Concatenates two strings, using the first `n` bytes of the second one. |
| `2-calloc.c` | Allocates memory for an array and sets it to zero. |
| `3-array_range.c` | Creates an array of integers from `min` to `max` (both included). |

## Requirements

- Ubuntu 20.04 LTS
- Compiled with `gcc -Wall -pedantic -Werror -Wextra -std=gnu89`
- Betty style checked (`betty *.c`)