#include <stdio.h>

/**
 * main - A program that prints numbers between 0 and 9
 * Letters between a and f.
 * Followed by a new line
 * Return: 0 (success)
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
