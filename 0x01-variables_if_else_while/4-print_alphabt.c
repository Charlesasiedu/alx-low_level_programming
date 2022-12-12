#include <stdio.h>
/**
 * main - alphabet in lowercase, followed by a new line except e and q
 * Return: Always 0
 */
int main(void)
{
	char abcd;

	for (abcd = 'a'; abcd <= 'z'; abcd++)
	{
		if (abcd != 'e' && abcd != 'q')
			putchar(abcd);
	}

	putchar('\n');

	return (0);
}
