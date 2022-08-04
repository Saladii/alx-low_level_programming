#include "variadic_functions.h"
#include "stdarg.h"

int sum_them_all(const unsigned int n, ...)
{
va_list ok;
unsigned int i;
int sum = 0;
if (n == 0)
{
return (NULL);
}
va_start(ok, n);
for (int i = 0; i < n; i++)
{
    sum += va_arg(ok, n);
}
va_end(ok);
return (ok);
}
