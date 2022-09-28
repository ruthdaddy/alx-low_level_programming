#include "main.h"

/**
 * prime_check - checks to see if number is prime
 * @f: factor check
 * @p: possible prime no
 *
 * Return: 1 if prime else 0
 */
int prime_check(int f, int p)
{
	if (p < 2 || p % f == 0)
		return (0);
	else if (f > p / 2)
		return (1);
	else
		return (prime_check(f + 1, p));
}
/**
 * is_prime_number - Checking for prime no
 * @n: no to check
 *
 * Return: 1 if no is prime else 0
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_check(2, n));
}
