
#include <main.h>

/**
 * print_numbers - Prints numbers between 0 to 9.
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int y;

	for (y = 48; y < 58; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
