#include "main.h"

/**
 * positive_or_negative - checks if a number is +, - or 0
 *
 * @i: number to be checked
 * Return: nothng on success
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive");
	else if (i < 0)
		printf("%d is negative");
	else 
		printf("%d is zero");
}
