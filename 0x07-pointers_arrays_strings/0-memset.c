#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memset - pinter function
 * @s: pointer to address of byte
 * @b: byte to fill
 * @n: number of fills
 *
 * Return: a pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
