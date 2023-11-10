#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - function that prints numbers followed by new line
 * @separator: string to be printed between numbers
 * @n: number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list arg;

va_start(arg, n);
for (i = 0; i < n; i++)
{
if (separator != NULL)
{
printf("%d", va_arg(arg, int));
printf("%s", separator);
}
else
printf("%d", va_arg(arg, int));
}
putchar('\n');
va_end(arg);
}









