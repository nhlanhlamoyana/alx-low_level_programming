#include "main.h"
/** 
 * times_table - prints the 9 times table
 * Return: void
 */

void times_table(void)
{
int row, column, product, ones;
for (row = 0; row <= 9; row++)
{
product = row * column;
tens = product / 10;
ones = product % 10;
if (column == 0)
{
_putchar('0');
}
else if (product < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(ones + '0');
}
}
_putchar('\n');
}

'(' }
