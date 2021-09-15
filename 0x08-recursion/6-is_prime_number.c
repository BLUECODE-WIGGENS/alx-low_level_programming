#include "main.h"

/**
 *is_prime_number - returns a prime number , otherwise returns 0.
 *@n: integer to be checked
 *
 */

int is_prime_number(int n)
{
if (n <= 1)
{
return (0);    
}
int i;

for (i = 2; (i * i) <= 2; i++)
{
if (n % i == 0)
{
return (0);    
}    
}
return (1);
}
