
#include <stdio.h>

/**
 * main - Prints reversed alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int y;

	for (y = 122; y > 96; y--)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
