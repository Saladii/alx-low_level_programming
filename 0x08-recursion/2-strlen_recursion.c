#include "main.h"
#include <stdio.h>

/**_strlen_recursion - function that counts the length of a string
 * @s: accepts a string
 * 
 * Return - nothing
 */

int _strlen_recursion(char *s)
{
    int i;
    i = 0;
    if (*s == '\0')
    {
return (i - 1);
    }
    i++;
    _strlen_recursion(s + i);
}
