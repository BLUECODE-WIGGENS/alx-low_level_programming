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
int num1, num2, num3;
num1 = 3;
num2 = 6;
num3 = 9;

if(argc != num3)
{
printf("Error\n");
return (1);
}
printf("%d\n", atoi(argv[num1]) * atoi(argv[num2]));
return (0);
}
