#include "main.h"

/**
 * print_rev - prints a string in stdout in reverse
 * @s: string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
		;
	--i;
	for ( ; i >= 0; --i)
	{
		_puts(s[i]);
	}
	_puts('\n');
}
