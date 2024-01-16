#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: bytes to be copied to this destination memory area
 * @src: source location bytes from memory area
 * @n: bytes from memory area to be copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
