#include "main.h"
#include <string.h>

/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: 0 (success)
 */

char *strchr(char *s; char c)
{
	int i = 0;

	for(; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
