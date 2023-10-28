#include "main.h"

/**
 * _strlen - functiom that returns the length of a string
 * @s: pointer to return length of string
 * Return: Length of string
 */

int _strlen(char *s)
{
int i;
int count = 0;

for (i = 0 ; s[i] != '\0' ; i++)
count++;
return (count);
}
