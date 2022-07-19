#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memset - pinter function
 *
 * Return - s
 */

char *_memset(char *s, char b, unsigned int n)
{
<<<<<<< HEAD
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
=======
    unsigned int i;
    
    for (i = 0; i < n; i++)
    {
        *(s + i) = b;
    }
    return (s);
>>>>>>> ce507762e73118e8b346462410664539f924e300
}
