# 0x0A. C - argc, argv

## Description
This directory contains programs that handle command-line arguments in C.

## Files

### 0-whatsmyname.c
A program that prints its own name followed by a new line.
- If the program is renamed, it prints the new name without recompiling
- The path before the name of the program is not removed

## Compilation
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis

## Usage
./mynameis
./anothername
