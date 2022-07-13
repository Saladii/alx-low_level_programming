#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcat - pointer function that accepts two arguments
 * @*dest , *src agruments
 *
 * Return - *dest
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
