#include "variadic_functions.h"
/**
 * sum_them_all - sum all paremeter passed to function
 * @n: number of argumnet to be passed to sum
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;

	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
	if (n == 0)
	{
	return (0);
	}
	else
{
sum += va_arg(ptr, const unsigned int);
}

}
va_end(ptr);
return (sum);

}
