
#include "main.h"

/**
* _puts - Reads string pointers
* @i: counter var
* @s: string read
*/
void _puts(char *str)
{
        int i = 0;

        while (str[i])
        {
                putchar(str[i]);
                i++;
        }
}