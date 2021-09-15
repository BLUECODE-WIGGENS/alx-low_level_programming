#include "main.h"

/**
 * my_sqrt - makes possible to evaluate from 1 to n.
 * @i: integer
 * @j: iterating from 1 to n.
 * 
 * Return: on success (1).
 * on error , -1
 */
int my_sqrt(int i, int j)
{
if (j * j == 1)
{
return(j);    
}
else if (j * j > i)
{
return (-1);    
}
return (my_sqrt(i, j + 1));    
} 
/**
 * _sqrt_recursion - returns the natural square root of a number;
 * @n: integer
 * 
 * return: on success 1
 * on error , -1
 */
int _sqrt_recursion(int n)
{
return (my_sqrt(n, 1));    
}
