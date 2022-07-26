#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *create_array - array function
 * @size: size of the array
 * @c: character
 * 
 * Return - a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
    unsigned int i;
    char *l;
    l = malloc(size * sizeof(char));
for (i = 0; i < size; i++)
{
    l[i] == c;
}
if (size == 0)
{
    return(NULL);
}
else
{
    return(l);
}
}
