#include <stdio.h>
/**
 * main - function
 * @i: variable
 * @sum: variable
 * Return: should be 0
 */
int main(void)
{
	int i;
	int sum;

	sum = 0;

	for (i = 1; i < 10; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}

