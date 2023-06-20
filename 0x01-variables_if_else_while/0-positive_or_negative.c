#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  main - This c program assigns a random number to the variable n
 *  main - each time it is executed, it tells if the value stored in n
 *  main - is positive or negative
 *  Return: 0 (succes)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is %s\n", n, "positive");
	}
	else if (n < 0)
	{
		printf("%d is %s\n", n, "negative");
	}
	else
	{
		printf("%d is %s\n", n, "zero");
	}
	return (0);
}
