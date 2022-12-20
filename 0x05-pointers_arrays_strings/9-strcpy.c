#include "main"

/**
 * _strcpy - copy a string
 * @dest: Destination value
 * @src: source value
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	dest[i++] = '\0';
	return (dest);
}
