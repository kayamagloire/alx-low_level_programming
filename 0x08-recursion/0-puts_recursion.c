#include "main.h"
#include <stdio.h>

/**
 * puts_recursion.c - a function that prints a string
 * @s: input
 * Return: 0 (success)
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
		putchar('\n');
