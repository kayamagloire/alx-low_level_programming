#include "main.h"
#include <stdio>

/**
 * main - A c program that prints the alphabet
 * in lowercase
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
		_puthcar(' ');
	}
	_putchar('\n');
}
