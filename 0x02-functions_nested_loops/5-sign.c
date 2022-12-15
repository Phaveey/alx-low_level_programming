#include "main.h"

/**
 * print_sign - return 0 for non-lowercase and 1 for lowercase
 *
 * @n: number to check
 * Return: 0
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}

	else
	{
		_putchar ('-');
		return (-1);
	}

}
