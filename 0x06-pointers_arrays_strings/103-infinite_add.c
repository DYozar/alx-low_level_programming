#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store result
 * @size_r: buffer size
 *
 * Return: pointer to result, or 0 if buffer size is too small
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int carry = 0;
int len1 = strlen(n1);
int len2 = strlen(n2);
int i, j;

if (len1 + 1 > size_r || len2 + 1 > size_r)
{
return 0;
}

for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--)
{
int digit1 = (i >= 0) ? n1[i] - '0' : 0;
int digit2 = (j >= 0) ? n2[j] - '0' : 0;
int sum = digit1 + digit2 + carry;
carry = sum / 10;
r[i + j + 1] = sum % 10 + '0';
}

if (carry)
{
r[0] = carry + '0';
return r;
}

return r + 1;
}

