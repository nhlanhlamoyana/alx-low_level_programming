#include "main.h"

/**
 * _isupper - function that checks for uppercase characters
 * @c: the function parameter
 * Return: 1 if it's successful 0 if it failed
 */
int _isupper(int c) 
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
