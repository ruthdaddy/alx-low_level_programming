#include "main.h"

/**
 * sqrt_check - checks for the square root of c
 * @g: guess at sqrt
 * @c: the no to find sqroot of
 *
 * Return: -1 or sqrt of c
 */
int sqrt_check(int g, int c)
{
	if (g * g == c)
		return (g);
	if (g * g > c)
		return (-1);
	return (sqrt_check(g + 1, c));
}
/**
 * _sqrt_recursion - Returns natural sq root of no.
 * @n: the no to sq root
 *
 * Return: sq root of n else -1 if n sq root is not natural
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}
