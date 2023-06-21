#include <stdio.h>
/**
 * main - nesting of lopp test 1
 * Return: 0 (success)
 */

int main(void)
{
	int i = 0, j;

	while (1 < 5)
	{
		j = 0;
		while (j < 3)
		{
			printf("2");
			j++;
		}
		printf("\n");
		i++;
	}
	return (0);
}
