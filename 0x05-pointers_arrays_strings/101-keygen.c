#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - starting point
 *Description: generating radom valid passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass[100];
	int z, sum, h;

	sum = 0;

	srand(time(NULL));

	for (z = 0; z < 100; z++)
	{
		pass[z] = rand() % 78;
		sum += (pass[z] + '0');
		putchar(pass[z] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			h = 2772 - sum - '0';
			sum += h;
			putchar(h + '0');
			break;
		}
	}

	return (0);
}
