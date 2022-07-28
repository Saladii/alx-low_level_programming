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
    int y;

    if (str == NULL)
    {
        return (NULL);
    }
    for (i = 0; str[i] != '\0'; i++)
    {
    }
    length = i - 1;
    y = i + 1;
    if (length > 0)
    {
    l = malloc(y * sizeof(char));
    for (x = 0; x <= length; x++)
    {
        l[x] = str[x];
    } 
    return (l);
    }
    else
    {
        l = malloc(1 * sizeof(char));
        l[0] = str[0];
        return (l);
    }
    free(l);
}
