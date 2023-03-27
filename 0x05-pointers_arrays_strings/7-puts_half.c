#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints half of a string, followed by a new line.
 *
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
	int i, len = 0, n;

/* Calculate the length of the string */
	while (str[len] != '\0')
		len++;

/* Calculate the number of characters to print */
	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len + 1) / 2;

/* Print the second half of the string */
	for (i = n; i < len; i++)
		_putchar(str[i]);

/* Print a new line*/
	_putchar('\n');
}

