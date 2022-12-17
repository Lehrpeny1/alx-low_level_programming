#include <stdio.h>
#include "main.h"

/**
 * print_numbers - print 0123456789
 * owned by Bwave ICT
 * Return: void
 */

void print_numbers(void)
{
	int c;;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

int main(void)
{
	print_numbers();
	return (0);
}

