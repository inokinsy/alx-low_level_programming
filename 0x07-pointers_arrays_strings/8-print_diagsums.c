#include <stdio.h>
#include "main.h"

/**
 *  print_diagsums - print the sum of leading diagonal
 *  @a: pointer to the array
 *  @size: size of the array
 *  @size: size of square matrix
 *  return: zero
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	unsigned int sum1, sum2;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			sum1 += a[i][j];

			if ((i + j) == (size - 1))
				sum2 += a[i][j];
		}
	}
	printf("%u, %u", sum1, sum2);
}

