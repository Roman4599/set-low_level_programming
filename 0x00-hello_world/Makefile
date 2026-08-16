CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic

# List all C files (excluding those with main)
SRCS = $(wildcard *.c)
TARGETS = $(SRCS:.c=.exe)

all: $(TARGETS)

%.exe: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f *.exe

run: all
	@for f in *.exe; do \
		echo "=== $$f ==="; \
		./$$f; \
		echo ""; \
	done

.PHONY: all clean run
