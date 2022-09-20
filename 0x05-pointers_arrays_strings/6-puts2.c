#include "main.h"

/**
 * puts2 - Prints every character of a string followed by \n
 * @str: String to be printed
 */
void puts2(char *str)
{
	int index = 0, len = 0;

	while (str[index++])
		len++;

	for (index = 0; index < len; index += 2)
		_putchar(str[index]);

	_putchar('\n');
}
