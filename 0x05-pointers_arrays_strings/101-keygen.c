#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password for the program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	srand(time(NULL));/* Seed the random number generator */

	char password[6];/* The password has 6 characters */
	int i;
	/* Generate a random uppercase letter */
	password[0] = rand() % 26 + 'A';

	/* Generate a random digit */	
	password[1] = rand() % 10 + '0';

	/* Generate a random lowercase letter */
	password[2] = rand() % 26 + 'a';

	/* Generate two random uppercase letters */
	for (i = 3; i < 5; i++)
	{
		password[i] = rand() % 26 + 'A';
	}

	/* Add null terminator to the end of the password */
	password[5] = '\0';

	printf("%s", password);

	return (0);
}
