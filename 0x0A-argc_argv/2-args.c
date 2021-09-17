#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments passed.
 * @argc: argument count
 * @argv: argument vector
 * return: 0;
 */

int main (int argc, char * argv[])
{
int count;

for (count = 0; count < argc; count++)
{
printf("argv[%d] : %s\n", count, argv[count]);    
}
return (0);
}
