#include "main.h"

int is_prime_helper(int n, int div);

/**
 * is_prime_number - checks if an integer is a prime number
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
if (n < 2)
return (0);

return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - recursively checks n for divisors starting from div
 * @n: the number to check
 * @div: the current divisor being tested
 *
 * Return: 1 if no divisor found up to sqrt(n), 0 if a divisor is found
 */
int is_prime_helper(int n, int div)
{
if (div * div > n)
return (1);

if (n % div == 0)
return (0);

return (is_prime_helper(n, div + 1));
}
