# Singly linked lists

C project introducing singly linked lists with the `list_t` node
(`char *str`, `size_t len`, `next`).

## Files

| File | Description |
| ---- | ----------- |
| `lists.h` | Header with the `list_t` structure and prototypes. |
| `0-print_list.c` | Prints all the elements of a `list_t` list, returns the number of nodes. |
| `1-list_len.c` | Returns the number of elements in a `list_t` list. |
| `2-add_node.c` | Adds a new node at the beginning of a `list_t` list. |
| `3-add_node_end.c` | Adds a new node at the end of a `list_t` list. |
| `4-free_list.c` | Frees a `list_t` list and the strings it holds. |
| `100-first.c` | Prints the tortoise and the hare quote before `main` runs. |
| `101-hello_alx.asm` | 64-bit assembly program printing `Hello, ALX`. |
| `*-main.c` | Test harnesses provided with the project. |

## Functions

| Function | Description |
| -------- | ----------- |
| `size_t print_list(const list_t *h)` | Prints `[len] str` per node, `[0] (nil)` when a node's `str` is `NULL`. Returns the number of nodes; an empty list prints nothing and returns `0`. |
| `size_t list_len(const list_t *h)` | Returns the number of nodes, `0` for an empty list. |
| `list_t *add_node(list_t **head, const char *str)` | Prepends a node holding a duplicate of `str`. Returns the new node or `NULL` on failure. |
| `list_t *add_node_end(list_t **head, const char *str)` | Appends a node holding a duplicate of `str`. Returns the new node or `NULL` on failure. |
| `void free_list(list_t *head)` | Frees every node and its duplicated string. |
| `void before_main(void)` | `__attribute__((constructor))` that prints the quote before `main` is executed. |

## Build and run

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_list.c -o a && ./a
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-list_len.c -o b && ./b
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_node.c 0-print_list.c -o c && ./c
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_node_end.c 0-print_list.c -o d && ./d
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-free_list.c 3-add_node_end.c 0-print_list.c -o e && valgrind ./e
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-first.c -o first && ./first
nasm -f elf64 101-hello_alx.asm && gcc -no-pie -std=gnu89 101-hello_alx.o -o hello && ./hello
```

Expected output of `./a`:

```
[5] Hello
[5] World
-> 2 elements

[0] (nil)
[5] World
-> 2 elements
```

Expected output of `./first`:

```
You're beat! and yet, you must allow,
I bore my house upon my back!
(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)
```

Expected output of `./hello`:

```
Hello, ALX
```

## Requirements

- Ubuntu 20.04 LTS
- Compiled with `gcc -Wall -pedantic -Werror -Wextra -std=gnu89`
- Betty style checked (`betty *.c`)
