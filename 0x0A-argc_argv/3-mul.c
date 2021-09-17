#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of two numbers
 * @argc: argument count
 * @argv: argument vector
 * 
 * return: 0.
 */

int main(int argc, char *argv[])
{
int i, j, f;
i = 1;
j = 2;
f = 3;

if(argc != f)
{
printf("Error\n");
return (1);
}
printf("%d\n", atoi(argv[i]) * atoi(argv[j]));
return (0);
}
