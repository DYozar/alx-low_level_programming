#include "main.h"

/**
 * swap_int - updates the value of an integer to 98
 * @n: pointer to an integer
 * @b: pointer to an integers
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

