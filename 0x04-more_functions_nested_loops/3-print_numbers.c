#include "main.h"
#include <stdio.h>

/**
 * print_numbers - function that prints all numbers from 1 to 9
 * Return: return void
 */
void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar(10);
}
