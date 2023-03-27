#include "main.h"

/**
 * print_array - Prints n elements of an array of integers, followed by a nline
 *
 * @a: Array of integers to be printed.
 * @n: Number of elements of the array to be printed.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)/* Loop through each element of the array.*/
	{

		if (i != n - 1)/* If it's not the last element, print a comma and space.*/
		{
			printf("%d, ", a[i]);/*Print the current element.*/
		}
		else
		{
			printf("%d", a[i]);/*Print the current element.*/
		}
	}

	printf("\n");/* Print a newline character at the end.*/
}

