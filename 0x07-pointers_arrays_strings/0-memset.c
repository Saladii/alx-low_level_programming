#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_memset - pinter function
 * 
 * Return - s
 */

char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;

    for (i = 1; i <= n; i++)
    {
        *(s +i) = b;
    }
    return (s);
}
