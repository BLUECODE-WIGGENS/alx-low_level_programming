#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of the string.
 * @s: string
 * Return: int
 **/
  int _strlen(char *s)
  {
    int ch = 0;

    while (*s != '\0')
        {
            ch++;
            s++;
        }
            return (ch);
  }
