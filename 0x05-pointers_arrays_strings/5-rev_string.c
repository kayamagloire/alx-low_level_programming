#include "main.h"
/**
 * rev_string - a function that reverses a string.
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char re = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
		counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		re = s[i];
		s[i] = s[counter];
		s[counter] = re;
	}
}
