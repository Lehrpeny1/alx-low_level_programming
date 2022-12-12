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
	int ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar(10);

	return (0);

}
