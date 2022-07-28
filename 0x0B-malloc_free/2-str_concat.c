#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - a pointer function
 * @s1: a string argumment
 * @s2: a string argumment
 * 
 * Return: a string as a pointer
 */
char *str_concat(char *s1, char *s2)
{
int i = strlen(s1);
int y = strlen(s2);
int c;
int z = i + y;
char s;
s = malloc(z *sizeof(xhar));
if (s == NULL)
{
    return (NULL);
}
for (c = 0; c <= i; c++)
{
s[c] = s1[c];   
}
for (c = i + 1; c <= y; y++)
{
s[c] = s2[c];
}
free(s);
}
