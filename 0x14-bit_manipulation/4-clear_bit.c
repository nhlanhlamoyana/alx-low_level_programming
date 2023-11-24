#include "main.h"
/**
 * clear_bit - the value of a bit to be set to a given bit to 0
 * @n: a pointer to chnage the number to
 * @index: an index that clears a bit
 *
 * Return: 1 if successful and -1 if unsucessful
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
