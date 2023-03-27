#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 1000

int main(void)
{
	char password[PASSWORD_LENGTH + 1];

	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	int i;

	srand(time(NULL));
	
	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = charset[rand() % sizeof(charset)];
	}

	password[PASSWORD_LENGTH] = '\0';
	printf("%s", password);

	return 0;
}
