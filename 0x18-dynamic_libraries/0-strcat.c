#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strcat - a function that concatenates 2 strings
 * @dest: string to be printed
 * @src: string to be printed
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int srclen = 0;
	int i;

	for (i = 0 ; dest[i] != '\0' ; i++)
		destlen++;
	for (i = 0 ; src[i] != '\0' ; i++)
		srclen++;

	for (i = 0 ; i <= srclen ; i++)
		dest[destlen + 1] = src[i];
	return (dest);
}

