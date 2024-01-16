#include "main.h"

/**
 * _strchr - a function that locates a charcter in a string
 * @s: string to find for character
 * @c: character to find in s
 * Return: NULL or s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
