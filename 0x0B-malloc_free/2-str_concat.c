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
int i, y, c, z;
char *s;
if (s1 == NULL)
{
s1 = "";
}
else if (s2 == NULL)
{
s2 = ""; 
}
i = strlen(s1);
y = strlen(s2);
c;
z = i + y;
s = malloc(z + 1 *sizeof(char));
if (s == NULL)
{
    return (NULL);
}
for (c = 0; c < i; c++)
{
s[c] = s1[c];   
}
for (c = i; c <= z; c++)
{
s[c] = s2[c -i];
}
return (s);
free(s);
}
