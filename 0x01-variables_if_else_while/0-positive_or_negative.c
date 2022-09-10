#include <stdlib.h>

#include <time.h>
#include <stdio.h>


/* more headers goes there */
/**
 * main - Prints whether n is Positive or negative
 * Number stored in the variable n
 * Return; Always 0 (success)
 */


/* betty style doc for function main goes there */
int main(void)
{
int n;
n = 4;
srand(time(0));
n = rand() - RAND_MAX / 2;
if ( n >  0 )
printf("%d\n", n, "is positive\n" );
else if ( n =  0 )
printf("%d\n", n, "is zero\n" );
else
printf("%d\n", n, "is negative\n" )
/* your code goes there */
return (0);
}
