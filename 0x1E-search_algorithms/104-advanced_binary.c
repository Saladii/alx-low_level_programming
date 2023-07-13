#include <stdio.h>
#include "search_algos.h"


/**
 * adv_binary_help - helper function for binary search
 * @array: int
 * @start: int
 * @end: int
 * @value: int
 * Return: int
 */

int adv_binary_help(int *array, int start, int end, int value)
{
	int mid, x;

	if (start > end)
		return (-1);

	if (end == start && value == array[start])
		return (start);

	printf("Searching in array:");

	for (x = start; x <= end; x++)
		if (x == start)
			printf(" %d", array[x]);
		else
			printf(", %d", array[x]);

	printf("\n");


	mid = start + ((end - start) / 2);

	if (value <= array[mid])
		return (adv_binary_help(array, start, mid, value));
	else
		return (adv_binary_help(array, mid + 1, end, value));

}


/**
 * advanced_binary - search algo via binary
 * @array: int
 * @size: size_t
 * @value: int
 * Return: int
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (adv_binary_help(array, 0, size - 1, value));

}
