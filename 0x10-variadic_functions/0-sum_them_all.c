#include "variadic_functions.h"
#include "stdarg.h"
#include "stdio.h"

/**
 * sum_them_all - varadic function
 * @n:number of argument
 * 
 * Return: sum of paramaters
 */

int sum_them_all(const unsigned int n, ...)
{
va_list ok;
unsigned int i;
int sum = 0;
if (n == 0)
{
return (0);
}
va_start(ok, n);
for (i = 0; i < n; i++)
{
    sum += va_arg(ok, n);
}
va_end(ok);
return (ok);
}
