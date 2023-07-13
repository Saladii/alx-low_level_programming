#include <stdio.h>
#include "search_algos.h"


/**
 * binary_help - helper function for binary search
 * @array: int
 * @start: int
 * @end: int
 * @value: int
 * Return: int
 */

int binary_help(int *array, int start, int end, int value)
{
	int mid, x;

	printf("Searching in array:");

	for (x = start; x <= end; x++)
		if (x == start)
			printf(" %d", array[x]);
		else
			printf(", %d", array[x]);

	printf("\n");


	if ((end == start) && (value != array[start]))
		return (-1);

	mid = start + ((end - start) / 2);

	if (value == array[mid])
		return (mid);
	if (value < array[mid])
		return (binary_help(array, start, mid - 1, value));
	else
		return (binary_help(array, mid + 1, end, value));

}

/**
 * exponential_search - search algo via explonent
 * @array: int
 * @size: size_t
 * @value: int
 * Return: int
 */

int exponential_search(int *array, size_t size, int value)
{
	int exp, prev = 0;

	if (!array)
		return (-1);

	for (exp = 1; prev <= (int)size - 1; exp = exp * 2)
	{

		if (exp >= (int)size)
			exp = size - 1;

		if (array[exp] == value)
			return (exp);

		else if (value < array[exp] || exp == (int)size - 1)
		{

			printf("Value found between indexes [%d] and [%d]\n",
			       prev, exp);
			return (binary_help(array, prev, exp, value));
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n",
			       exp, array[exp]);
			prev = exp;
		}
	}
	return (-1);
}
