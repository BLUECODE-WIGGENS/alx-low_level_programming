#include "main.h"

/**
 * my_palindrome1 - obtains length of a
 * @a: string
 * @l: integer to count length
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int my_palindrome1(char *a, int l)
{
	if (*a == 0)
		return (l - 1);
	return (my_palindrome1(a + 1, l + 1));
}
/**
 * my_palindrome2 - compares string vs string reverse
 * @a: string
 * @l: length
 *#include "main.h"

/**
 * my_palindrome2 - obtains length of a
 * @a: string
 * @l: integer to count length
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int my_palindrome2(char *a, int l)
{
	if (*a == 0)
		return (l - 1);
	return (my_palindrome2(a + 1, l + 1));
}
/**
 * my_palindrome3 - compares string vs string reverse
 * @a: string
 * @l: length
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int my_palindrome3(char *a, int l)
{
	if (*a != *(a + l))
		return (0);
	else if (*a == 0)
		return (1);
	return (my_palindrome3(a + 1, l - 2));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evaluate
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_palindrome(char *s)
{
	int l;

	l = my_palindrome2(s, 0);
	return (my_palindrome3(s, l));
}
 /* Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int my_palindrome3(char *a, int l)
{
	if (*a != *(a + l))
		return (0);
	else if (*a == 0)
		return (1);
	return (my_palindrome3(a + 1, l - 2));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evaluate
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_palindrome(char *s)
{
	int l;

	l = my_palindrome2(s, 0);
	return (my_palindrome3(s, l));
}
