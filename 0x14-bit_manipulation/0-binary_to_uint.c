#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: a pointer to a string
 * Return: converted number or 0 if b is NULL or there is a error
 */
unsigned int binary_to_uint(const char *b)
{
	int alx;
	unsigned int nhlanhla = 0;


	if (!b)
		return (0);
	for (alx = 0; b[alx]; alx++)
	{
		if (b[alx] < '0' || b[alx] > '1')
			return (0);
		nhlanhla = 2 * nhlanhla + (b[alx] - '0');
	}
	return (nhlanhla);
}

