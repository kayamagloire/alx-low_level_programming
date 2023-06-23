#include <stdio.h>
#include <math.h>

/**
 * main - The prime factors of 1231952 are 2, 2, 2, 2, 37 and 2081.
 * Write a program that finds and prints
 * the largest prime factor of the number 612852475143
 * followed by a new line.
 * Return: 0 (succes)
 */

int main(void)
{
	long int n;
	long int max;
	long int i;

	n = 612852475143;
	max = -1;

	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}
	if (n > 2)
		max = n;

	printf("%ld\n", max);

	return (0);
}
