#include "main.h"

int _sqrt_helper(int n, int x);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the natural square root of n, or -1 if it doesn't have one
 */
int _sqrt_recursion(int n)
{
return (_sqrt_helper(n, 0));
}

/**
 * _sqrt_helper - recursively searches for the natural square root of n
 * @n: the number to find the square root of
 * @x: the current guess
 *
 * Return: x if x * x == n, -1 if x * x exceeds n with no match found
 */
int _sqrt_helper(int n, int x)
{
if (x * x == n)
return (x);

if (x * x > n)
return (-1);

return (_sqrt_helper(n, x + 1));
}
