#include "3-calc.h"
#include <stdio.h>

/**
 * main- entry point
 * @argc: argument count
 * @argv: pointer to an array containing the parameters
 *
 * Return: zero.
 */

int main(int argc, char *argv[])
{
int (*ptr)(int, int);
int a, b;
char *s;

if (argc != 4)
{
printf("Error\n");
exit(98);
}
a = atoi(argv[1]);
b = atoi(argv[3]);
s = argv[2];

if (*s != '+' && *s != '/' && *s != '-' && *s != '%' && *s != '*')
{
printf("Error\n");
exit(99);
}
ptr = get_op_func(s);
if (ptr == NULL)
{
printf("Error\n");
exit(99);
}
printf("%d\n", (a, b));
return (0);
}
