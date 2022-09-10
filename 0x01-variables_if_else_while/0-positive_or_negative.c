#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints whether n is Positive or negative
 * Number stored in the variable n
 * Return; Always 0 (success)
 */
int main(void)I
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if ( n > 0 )
	{
		printf("%d is positive\n", n);
	}
	
	else if ( n == 0 )
	{
		printf("%d is zero\n", n);
	}

	else
	{
		printf("%d\n", "is negative\n", n);
	}
	return (0);
}
