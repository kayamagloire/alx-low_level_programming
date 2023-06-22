#include <unistd.h>
#include "main.h"
/**
 * main - This function declarion writes the character c to stdout
 * @c: Character to print
 * Return: On success, return the number of bytes written (always 1).
 * On error, returns -1.
 */

int putchar(char c)
{
	return (write(1, &c, 1));
}
