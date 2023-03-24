#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 *
 * Return: void
 */

void print_number(int n)
{
	int i = 1, j = n;

	if (n < 0)
	{
		_putchar('-');
		j = -j;
	}

	while (j / i > 9)
		i *= 10;

	while (i > 0)
	{
		_putchar((j / i) % 10 + '0');
		i /= 10;
	}
}
