include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the alphabet in lowercase without q and e.
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
	return (0);
}
