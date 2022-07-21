#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - accepts an argument
 * @s: an argument to be taken
 *
 * Return - ch
 */

void _puts_recursion(char *s)
{
	int i;
	i = 0;
	if (s[i] == '\0')
	{
		return (0);
	}

	putchar(s[i]);
	putchar(puts_recursion(s + 1));
	
	putchar('\n');
}