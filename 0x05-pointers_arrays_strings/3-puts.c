#include "main.h"

/**
 * _puts - Prints a string followed by a newline to stdout
 * @str: the string to be printed
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
