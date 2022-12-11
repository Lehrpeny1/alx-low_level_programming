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
	int ch = 'a';

	while (ch <= 'z')
	{
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
