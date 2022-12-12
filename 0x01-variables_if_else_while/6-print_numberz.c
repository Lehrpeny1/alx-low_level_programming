#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function to generate ramdom number
 *
 * Return: Always 0 (success)
 *
 */

int main(void)

{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar(10);

	return (0);

}
