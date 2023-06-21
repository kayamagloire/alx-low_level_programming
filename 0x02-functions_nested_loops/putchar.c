#include "main.h"
#include <unistd.h>
/**
 * _putchar - This function declarion writes the character c to stdout
 * @c: Character to print
 *
 * Return: 1 (success)
 * Return: -1 (error)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
