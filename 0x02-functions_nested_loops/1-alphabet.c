#include "main.h"
/**
 * print_alphabet - main function
 * _putchar: print the alphabet
 * Return: should be;
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}

	_putchar('\n');

}
