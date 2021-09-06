#include "main.h"

/**
* puts2 - print every other character
* @str: string
**/
void puts2(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		if (i % 2 == 0)
		{
			puts(str[i]);
		}
		i++;
	}
	puts('\n');
}