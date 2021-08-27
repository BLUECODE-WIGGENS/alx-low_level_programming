#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase without q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char alp[26] = "abcdfghijklmnoprstuvwxyz";
        int y;

        for (y = 0; y < 26; y++)
        {
                putchar(alp[y]);
        }
        putchar('\n');
        return (0);
}


