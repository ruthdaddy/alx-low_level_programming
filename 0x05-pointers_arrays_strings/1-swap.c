#include "main.h"

/**
 * _strlen - Returns length of a string
 * @str: the length of string to be determined
 *
 * Return: Length of string
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
