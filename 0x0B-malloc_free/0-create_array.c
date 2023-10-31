#include "main.h"

/**
 * create_array - function that creates an array
 * @size: size of array
 * @c: character to be stored in array
 * Return: null if size 0 and pointer to the array
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *arr;

if (size == 0)
return (NULL);
arr = malloc(sizeof(char) * size);
if (arr == NULL)
return (NULL);

for (i = 0; i < size; i++)
arr[i] = c;
return (arr);
}
