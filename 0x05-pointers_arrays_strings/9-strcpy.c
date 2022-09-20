#include "main.h"

/**
 * _strcpy - copies string ponted by src incl null point - dest
 * @dest: a buffer to copy string to
 * @src: the source string to copy
 *
 * Return: Pointer to destination string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
