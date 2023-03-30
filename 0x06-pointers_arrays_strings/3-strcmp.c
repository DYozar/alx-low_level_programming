#include "main.h"

/**
 * _strcmp - Compare two strings
 * @s1: The first string to be compared
 * @s2: The second string to be compared
 *
 * Return: Integer value greater than, equal to or less than 0, depending on
 * the comparison of the two strings
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}	

	return (s1[i] - s2[i]);
}

