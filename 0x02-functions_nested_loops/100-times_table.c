#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints time table
 * @n: value user provides
 * Return: Always 0
 */
void print_times_table(int n)
{
	int row;
	int column;
	int product;

	if (n >= 0 && n < 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				product = (row * column);

				if (column == 0)
					_putchar('0');

				else if (product < 10)
				{

					_putchar(',');
		                	_putchar(' ');
			        	_putchar(' ');
				        _putchar(' ');
				        _putchar(product % 10 + '0');

			        }
			        else if (product >= 10 && product < 100)
			        {

				        _putchar(',');
				        _putchar(' ');
				        _putchar(' ');
				        _putchar((product / 10) % 10 + '0');
				        _putchar(product % 10 + '0');

			        }     
			        else if (product > 99 && product < 1000)
			        {

				        _putchar(',');
				        _putchar(' ');
				        _putchar(product / 100 + '0');
				        _putchar((product / 10) % 10 + '0');
				        _putchar(product % 10 + '0');

			        }
			}
			_putchar('\n');
		}
	}
}
