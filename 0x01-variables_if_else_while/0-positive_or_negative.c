#include <stdlib.h>

#include <time.h>

/* more headers goes there */
/**
 * main - Positive or negative
 * Return: 0 Postive or negative
 */


/* betty style doc for function main goes there */
int main(void)
{
		int n;
			srand(time(0));
				n = rand() - RAND_MAX / 2;
					n=4;
					if (n>0)
					{
						printf("%d\n", n, "is positive")
					}
						else
						{
							if(n=0)
							{
						printf("%d\n", n, "is zero")
							}
							else
							{
							printf("%d\n", n, "is negative")
							}
						}
					/* your code goes there */
					return (0);
}
