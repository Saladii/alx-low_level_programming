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
    ok = malloc(height *sizeof(int *));
    if (ok == NULL)
    {
        free(ok);
        return (NULL);
    }
    for (i = 0; i < height; i++)
    {
        ok[i] = malloc(width *sizeof(int*));
        if (ok[i] == NULL)
        {
            for (i--; i >= 0; i--)
				free(ok[i]);
			free(ok);
			return (NULL);
        }
    }
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
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