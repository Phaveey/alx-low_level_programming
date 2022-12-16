#include "main.h"
#include <stdio.h>

/**
 * main - prints from 1 - 100, a new line follows
 * prints Fizz for multiples of 3 though
 * prints Buzz for multiples of 5
 * Return: 0 alwways successful
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		} else if (i == 1)
		{
			printf("%d", i);
		} else
		{
			printf(" %d", i);
		}
	}
	printf("\n");

	return (0);
}
