#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = '0';

		while (c <= 'f')
	{
		if (c > '9' && c < 'a')
	{
			c++;
			continue;
	}
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
