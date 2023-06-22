#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 * Followed by a new line.
 * Return: 0 (succes)
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
