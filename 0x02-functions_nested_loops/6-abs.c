#include "main.h"

/**
 * _abs - main function
 * @a: main parametre
 * Return: should be a
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
