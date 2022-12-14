#include "main.h"

/**
 * _islower - check if a character is lowercase if YES return 1
 * otherwise rerurns 0 just like islower() function in ctype.h
 * @c: is the int value to be compared with the ASCII value
 * Return: 0 if successful. _islower - Entry point
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
