#include "main.h"
/**
 * _isupper - main function
 * @c: para
 * Return: should be 1 if upper else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
