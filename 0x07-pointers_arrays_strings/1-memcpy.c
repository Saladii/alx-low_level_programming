#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memset - pinter function
 *
 * Return - s
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
