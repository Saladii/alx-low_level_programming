#include "main.h"
<<<<<<< HEAD
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
=======

/**
 * string_toupper - Function that changes all
 * lowercase letter of a string to uppercase
 * @str: string to convert
 *
 * Return: char
 */

char *string_toupper(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		if ((str[count] >= 97) && (str[count] <= 122))
			*(str + count) -= 32;
		count++;
	}
	return (str);
>>>>>>> 246fb6fe244acc6bb52520961591908a65cd6b3d
}
