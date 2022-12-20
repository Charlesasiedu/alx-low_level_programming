#include "main.h"

/**
 * puts2 -  prints every other character of a string
 * @str: the string to be treated
 * Return: void
 */
void puts2(char *str)
{
	int x;
	int j = 0;

	while(str[j] != '\0')
	{
		j++;
	}
	for (x = 0; x < j; x += 2)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
