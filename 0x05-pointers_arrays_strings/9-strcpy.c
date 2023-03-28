#include "main.h"

/**
 * *_strcpy - copy a string
 * @dest: destination value
 * @src: source value
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int n;

	for (n = 0; src[n] != '\0'; n++)
	{
		dest[n] = src[n];
	}
	dest[n++] = '\0';
	return (dest);
}
