#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main
 *
 * Return
 */

char *string_toupper(char *)
{
	int j = 0;
	char ch;

	while (str[j])
	{
		ch = str[j];
		putchar(toupper(ch));
		j++;
	}
	return (0);
}
