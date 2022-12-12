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
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '0'; tens++)
	{
		for (ones = '0'; ones <= '0'; ones++)
		{
			if (!((ones == tens) || (tens > ones)))
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '0' && tens == '0'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar(10);

	return (0);

}
