#include <stdio.h>

/**
 * main - function
 * Return: should be 0
*/

int main(void)
{
	char l = 'z';

	while (l >= 'a')
	{
		putchar(l);
		l--;
	}

	putchar('\n');

	return (0);
}
