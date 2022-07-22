#include "main.h"
#include <stdio.h>

/**
 * _strchr
 * @s
 * @c
 *
 * Return
 */

char *_strchr(char *s, char c)
{
	char *result;
	int i;

	for (i = 0; i < '\0'; i++)
	{
		if(*(s + i) == c)
		{
			*(result + i) = *(s +i);
			i++;
		}
	}
	return (result);
}
