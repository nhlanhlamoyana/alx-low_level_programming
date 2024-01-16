#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - a function that searchesa string for any of a set of bytes
 * @s: string to find from
 * @accept: string to find in s
 * Return: NULL or accept
 */

char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
const char *a = accept;

while (*a != '\0')
{
if (*s == *a)
return (s);
a++;
}
s++;
}

return (NULL);
}
