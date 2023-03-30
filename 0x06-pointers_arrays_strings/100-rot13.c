#include "main.h"

/**
 * rot13 - encodes a string using rot13
 *
 * @s: the string to encode
 *
 * Return: the encoded string
 */
char *rot13(char *s)
{
	int i, j;
	char original[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; original[j] != '\0'; j++)
		{
			if (s[i] == original[j])
			{
				s[i] = rot13[j];
				break;
			}
		}
	}
	return (s);
}

