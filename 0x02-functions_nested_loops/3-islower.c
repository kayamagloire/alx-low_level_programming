#include "main.h"
/**
 * main - This function checks for lowercase characters.
 * @c: the character to be checked.
 * Return: 1 if char is lowercase, else return 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
