#include "main.h"

/**
 * print_line - print a stright line
 * @c: character to be printed
 * Return - a line
 */
void print_line(int n)
{
    if (n > 0)
    {
        
        for ( int i = 0; i < n; i++)
        {
            _putchar(95);
        }
         
    }
    else {
        _putchar('\n');
    }

}
