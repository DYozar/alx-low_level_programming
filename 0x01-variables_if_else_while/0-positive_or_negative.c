#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - this is mean function
 * Return: while return 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* check the boolean condition */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n < 0)
	{
		printf("%d is negative\n", n);
	} else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
