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
	char ch = "a";

	for (i = 0; i != '\0'; i++)
	{
	_putchar (ch[i] = s[i]);
	}
	return (ch);
}
