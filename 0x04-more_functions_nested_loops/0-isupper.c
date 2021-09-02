#include "main.h"
#include <ctype.h>

/**
 * _isupper - a function that checks for uppercase character
 *@c: input letter
 * Return: 1 if int c is uppercase, 0 if otherwise
 */
int _isupper(int c)
{
  if((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
