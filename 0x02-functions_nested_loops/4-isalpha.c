#include "main.h"

/**
 * _islower - it's the main function
 * @c: it-s a parameter
 * Return: should be 1 if c is a letter or 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
