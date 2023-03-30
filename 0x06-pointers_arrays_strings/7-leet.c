#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to encode
 *
 * Return: pointer to encoded string
 */
char *leet(char *str)
{
int i, j;
char leet[] = "aAeEoOtTlL";
char leet_enc[] = "4433007711";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; leet[j] != '\0'; j++)
{
if (str[i] == leet[j])
{
str[i] = leet_enc[j];
break;
}
}
}

return (str);
}

