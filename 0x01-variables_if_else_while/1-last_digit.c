#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main -Assigns a random nummber to the variable n each time it is executed
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	y = n % 8;
        if (y > 5)
        {
                printf("Last digit of %d is %d and is greater than 5\n" n, y);
        }
        else if (y == 0)
        {
                 printf("Last digit of %d is %d and is 0\n", n, y);
        }
        else
        { 
                 printf("Last digit of %d is %d  and is less than 6 and not 0\n", n, y);
        }    
	return (0);
}
