#include "main.h"
/**
 * main - This function prints 10 times the alphabet
 * in lowercase, followed by a new line
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while(i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
	return (0)
}
