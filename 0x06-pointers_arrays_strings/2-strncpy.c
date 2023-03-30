/**
 * _strncpy - copies the first n bytes of the string pointed to by src,
 * including the terminating null byte, to the buffer pointed to by dest.
 * If the length of src is less than n, null bytes are appended to dest
 * until a total of n bytes have been written.
 * If the length of src is greater than or equal to n, the string will not
 * be null-terminated.
 *
 * @dest: the destination buffer.
 * @src: the source string.
 * @n: the maximum number of bytes to be copied from src.
 *
 * Return: a pointer to the destination buffer.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}

