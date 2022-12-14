#include "main.h"

/**
 * _islower - checks if a character is in lowercase, if is is, it returns 1
 * it returns 0 otherwise like islower() in ctype.h
 * @c: the int value to e compared with the ASCII value
 * Return: 0 (Success). _islower - Entry point
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
