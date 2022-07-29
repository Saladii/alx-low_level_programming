#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - a pointer function
 * @s1: a string argumment
 * @s2: a string argumment
 *
 * Return: a string as a pointer
 */
int **alloc_grid(int width, int height)
{
    int **ok;
    int i;
    int j;
    if (width > 0 && height > 0)
    {
    ok = malloc(width *sizeof(int*));
    if (ok == NULL)
    {
        return (NULL);
    }
    for (i = 0; i < width; i++)
    {
        ok[i] = malloc(height *sizeof(int*));
    }
    for (i = 0; i < width; i++)
    {
        for (j = 0; j < height; j++)
        {
            ok[i][j] = 0;
        }
        
    }
    return (ok);
    free(ok);
    }
    else
    {
        return (NULL);
    }
}