#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: base no
 * @y: exponent
 *
 * Return: y < 0 retrun -1 else x ^ y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
