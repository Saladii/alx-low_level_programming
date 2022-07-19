#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memcpy - apointer function that copys the given amount
 * @dest: to be coppie to
 * @src: to be copied from
 * @n: number of bytes to be copied
 *
 * Return: a pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = src[i];
		i++;
	}
	return (dest);
}
