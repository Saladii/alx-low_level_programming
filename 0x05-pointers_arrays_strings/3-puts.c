#include "main.h"
/**
 * _puts - prints a string
 * @str: A pointer to an int that will be changed
 *
 * Return: 0
 */
void _puts(char *str)

{
	char *c;
	int n;

	c = str;

	for (m = 0; c[m]; m++)
	{
		_putchar (c[m]);
	}
	putchar('\n');
}
