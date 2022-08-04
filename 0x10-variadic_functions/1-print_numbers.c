#include "variadic_functions.h"

/**print_numbers -a fubction that accepts tww arguments
 * @separator: a string argument
 * @n:the vardic argument that takes number of to be printed
 * 
 * Return - nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list pp;
unsigned int i = 0;

va_start(pp, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(pp, int));
if (separator != NULL && i < n - 1)
{
printrf("%s", separator);
}
}
printf("\n");
va_end(pp);
}
