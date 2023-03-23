#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints the multiplication table for a given number
 * @n: the number to print the multiplication table for
 *
 * Return: void
 */

void print_times_table(int n)
{
	int i, j;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j == 0)
				_putchar('0');
			else
				printf(", %d", i * j);
		}
		_putchar('\n');
	}
}
