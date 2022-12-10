#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main function to generate ramdom number
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	if (n > 5)
	{
		printf("%d amd is greaterthan 5\n", n);
	}
	else if ((n < 6) && (n < 0))
	{
		printf("%d and is less than 6and not 0\n", n);
	}
	else
	{
		printf("%d and is 0\n", n);
	}
	return (0);
}


