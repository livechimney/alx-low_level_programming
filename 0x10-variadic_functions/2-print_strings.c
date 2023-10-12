#include "variadic_functions.h"
/*
 * print_strings - Print strings, followed by new line.
 * as parameter
 * @separator: separator btwn two strings
 * @n: number of strings to print
 * Description: if one of strings is NULL, (nil) is printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;

va_list strings;
va_start(strings, n);

for (i = 0; i < n; i++)
{
	str = va_arg(strings, char *);
	if (str == NULL)
	{
		printf("(nil)");

	}
	else
	{
		printf("%s", str);
	}
	if (i != (n - 1) && separator != NULL)
		printf("%s", separator);
}
printf("\n");
va_end(strings);

}
