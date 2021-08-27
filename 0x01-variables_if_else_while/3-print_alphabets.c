#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and then in uppercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int x;

	for (x = 0; x < 52; x++)
	{
		putchar(alp[x]);
	}
	putchar('\n');
	return (0);
}
