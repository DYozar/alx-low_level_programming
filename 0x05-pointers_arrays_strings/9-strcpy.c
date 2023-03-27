#include "main.h"
#include <stdio.h>

/**
 * main - Checks the _strcpy function.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

/* Iterate over source string and copy each character to destination */
	for (i = 0; src[i] != '\0'; i++)
	{
	    dest[i] = src[i];
	}

/* Copy the terminating null byte to destination */
	dest[i] = '\0';

	return (dest);
}

