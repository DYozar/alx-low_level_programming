#include "main.h"

/**
 * _atoi - Convert a string to an integer
 * @s: The string to be converted
 *
 * Return: The integer value of the string
 */
int _atoi(char *s)
{
    int sign = 1;
    int result = 0;
    int i = 0;

    /* Skip all non-digit characters at the beginning of the string */
    while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
    {
        /* Check for sign characters */
        if (s[i] == '-')
            sign *= -1;

        i++;
    }

    /* Read all digit characters until the end of the string or a non-digit character */
    while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
    {
        /* Add the digit to the result, making sure to handle overflow */
        result = result * 10 + (s[i] - '0');

        /* Move to the next digit */
        i++;
    }

    /* Apply the sign and return the result */
    return sign * result;
}

