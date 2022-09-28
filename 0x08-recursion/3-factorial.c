#include "main.h"

/**
 * factorial - Returns the factorial of a given no
 * @n: The number to get factorial of
 *
 * Return: factorial of n, n < 0 return -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
