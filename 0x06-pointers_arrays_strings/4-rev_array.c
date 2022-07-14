#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main
 *
 * Return
 */

void reverse_array(int *a, int n)
{
	char o[];
	int i;
	i = n;
	while (i >= 0)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i--;
	}
	printf("\n");
}
