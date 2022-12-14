#include "main.h"

/**
 * _abs - gives the absolute value of an integer
 * @n : int to operate on
 * Return: returns unsigned int
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}

	else
	{
		n *= -1;
		return (n);
	}
}
