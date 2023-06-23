#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @c: first integer
 * @c: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest_number;

	if (a > b && a > c)
	{
		largest_number  = a;
	}
	else if (a > b && c > b)
	{
		largest_number  = c;
	}
	else if (b > c)
	{
		largest_number = b;
	}
	else
	{
		largest_number = c;
	}
	return (largest_number);
}
