#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 1000

int main(void)
{
	char password[PASSWORD_LENGTH + 1];

	int i, sum, n;

	sum = 0;

	srand(time(NULL));
	
	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = rand() % 78;
		sum += (password[i] + '0');
		putchar(password[i] + '0');
		if ((2772 -sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	return 0;
}
