#include "main.h"
#include <stdio.h>

/**
 * main - Checks the _strcpy function.
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[98];
	char *ptr;

/* Copy source string to destination buffer using _strcpy function */
	ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");

/* Print destination buffer and pointer to destination buffer */
	printf("%s", s1);
	printf("%s", ptr);

    return (0);
}

