
#include "main.h"

/**
* _puts - Reads string pointers
* @i: counter var
* @s: string read
*/
void _puts(char *str)
{
        while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
