#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a pointer function
 * @str: a string argumment
 * 
 * Return: a string as a pointer
 */
char *_strdup(char *str)
{
    int i;
    int length;
    char *l;
    int x;

    for (i = 0; str[i] != '\0'; i++)
    {
    }
    length = i - 1;
    l = malloc(length * sizeof(char));
    for (x = 0; x <= length; x++)
    {
        l[x] = str[x];
    } 
    if (str == NULL)
    {
        return (NULL);
    } 
    else
    {
        return (l);
    }
}
