#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  a function that prints
 * the sum of the two diagonals of a square matrix of integers
 * @a: input
 * @size: input
 * Return: 0 (success)
 */

void print_diagsums(int *a; int size)
{

	int sum1 = 0;
	int sum2 = 0;

	for (int y = 0; y < size; y++)
	{
		sum1 = sum1 + a[y * size + y];
		sum2 = sum2 + a[y * size + (size - 1 - y)];
	}
	printf("%d, %d\n", sum1, sum2);
}
