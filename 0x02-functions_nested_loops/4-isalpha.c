#include "main.h"

/**
 * _isalpha - Return 1 if c is a letter (lowercase or uppercase)
 *
 * @c: an unsigned int value to be printed
 * Return: 1 if it is alphabet. If not,return 0
 */

int _isalpha(int c)

{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
