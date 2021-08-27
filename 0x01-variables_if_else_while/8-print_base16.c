
#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int y;

	for (y = 48; y < 58; y++)
	{
		putchar(y);
	}
	for (y = 97; y < 103; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
