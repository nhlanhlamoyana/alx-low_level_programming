#include "main.h"

/**
 * swap_int - function that swaps the values of 2 integers
 * @a: value 1
 * @b: value 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
