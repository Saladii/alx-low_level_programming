#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main
 * 
 * Return
 */

char *_memset(char *s, char b, unsigned int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        s[i] = b;
    }
    return (s);
}