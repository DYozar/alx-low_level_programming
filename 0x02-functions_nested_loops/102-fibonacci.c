#include <stdio.h>
/**
 * main - function
 * Return: should be 0
 */
int main(void)
{
	int a = 1, b = 2, c;
	int fibonacci[50] = {a, b};

	for (int i = 2; i < 50; i++)
	{
		c = a + b;
		fibonacci[i] = c;
		a = b;
		b = c;
	}

	for (int i = 0; i < 49; i++)
	{
		printf("%d, ", fibonacci[i]);
	}
	printf("%d\n", fibonacci[49]);

	return (0);
}
