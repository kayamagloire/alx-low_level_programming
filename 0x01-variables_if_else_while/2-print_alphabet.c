#include <stdio.h>

/**
 * main - _print alphabet is a program that prints
 * the alphabet in lowercase, followed by a new line.
 * Return: 0 (success)
 */

int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alpha[i]);
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
