#include "main.h"

/**
 * get_bit - takes value of a bit of a index in a decimal number to return
 * @n: search for index or number or integer
 * @index: numbers of bit of index(s)
 * Return: the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int amount_of_bit_values;

	if (index > 63)
		return (-1);
	amount_of_bit_values = (n >> index) & 1;
	return (amount_of_bit_values);
}
