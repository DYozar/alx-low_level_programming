#include "main.h"

/**
 * print_triangle - prints a triangle of size "size"
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = size - i; j > 1; j--)
			_putchar(' ');
		for (j = 0; j <= i; j++)
			_putchar('#');
	_putchar('\n');
	}
}

