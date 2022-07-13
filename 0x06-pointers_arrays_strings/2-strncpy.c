#include "main.h"
#include <string.h>

/**
 * *_strncp - pointer function
 *
 * Retun - dest
 */
char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return (dest);
}
