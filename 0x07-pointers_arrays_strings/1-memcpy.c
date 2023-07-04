#include "main.h"
#include <string.h>

/**
 * _memcpy - copies memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: number of bytes
 * Return: copied memory with n byted changed
 */

void* memcpy(void *dest, const void *src, size_t n)
{
	char* dest_ptr = dest;
	const char* src_ptr = src;

	for (size_t i = 0; i < n; i++)
	{
		dest_ptr[i] = src_ptr[i];
	}
	return (dest);
}
