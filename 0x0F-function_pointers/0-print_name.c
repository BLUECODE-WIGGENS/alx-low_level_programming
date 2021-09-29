#include "main.h"

/**
 * print_name - prints a name when called.
 * @name: A string
 * @f: A function of a pointer
 */

void print_name(char *name, void (*f)(char *))
{
void (*ptr)(char *);

if (name == NULL || f == NULL)
{
return;
}
ptr = f;
ptr(name);
}
