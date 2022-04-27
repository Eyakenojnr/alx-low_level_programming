#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of two diagonals of a square
 * matrix of integers
 *
 * @a: input square array
 * @size: size of one dimensional array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (j = 0, i = size - 1; j < (size * size); j += size + 1, i += size -
			 1)
		sum += a[j], sum2 += a[i];
	printf("%d, %d\n", sum1, sum2);
}
