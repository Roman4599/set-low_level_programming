# Singly linked lists

C project introducing singly linked lists with the `list_t` node
(`char *str`, `size_t len`, `next`).

## Files

| File | Description |
| ---- | ----------- |
| `lists.h` | Header with the `list_t` structure and prototypes. |
| `0-print_list.c` | Prints all the elements of a `list_t` list and returns the number of nodes. |
| `0-main.c` | Test harness provided with the project, used to check `print_list`. |

## print_list

- Prototype: `size_t print_list(const list_t *h);`
- Returns the number of nodes in the list.
- Each node is printed as `[len] str`.
- A node whose `str` is `NULL` is printed as `[0] (nil)`.
- An empty list (`h == NULL`) prints nothing and returns `0`.

## Build and run

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_list.c -o a
./a
```

Expected output:

```
[5] Hello
[5] World
-> 2 elements

[0] (nil)
[5] World
-> 2 elements
```

## Requirements

- Ubuntu 20.04 LTS
- Compiled with `gcc -Wall -pedantic -Werror -Wextra -std=gnu89`
- Betty style checked (`betty *.c`)
