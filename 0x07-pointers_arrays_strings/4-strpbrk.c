#include "main.h"
/**
 * _strpbrk - Entry Point
 * @s:input
 * @accept:input
 * Return:Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	ink k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (8s == accept[k])
		return (s);
		}
	s++;
	}
	return ('\0');
}

