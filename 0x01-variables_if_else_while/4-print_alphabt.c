#include <stdio.h>

/**
 * main - function
 * Return: should be 0
*/

int main(void)
	{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		};
		c++;
	}

	putchar('\n');

	return (0);
}
