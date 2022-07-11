#include "main.h"

/**
 * _printf - custom implementation of the stdio.h prinf function
 * @format: the formatable string input
 * 
 * Return: count - int (success), -1 (failure)
 */

int _printf(const char *format, ...)
{
	unsigned int i; /* To handle all char formats */
	char *s; /* to handle all string formats */
	va_list f_list; /* f_list refers to the format list */
	int counter = 0, j = 0;

	va_start(f_list, format);

	while (format[j] != '\0')
	{
		if (format[j] != '%')
		{
			_putchar(format[j++]); /* Print out char and increment after printing */
			counter++;
		}
		else
		{
			j++; /* Go to the next character */
			if (format[j] == '%')
			{
				_putchar(format[j]);
				counter++;
			}
			if (format[j] == 'c')
			{
				i = va_arg(f_list, int);
				_putchar(i);
				counter++;
			}
			if (format[j] == 's')
			{
				s = va_arg(f_list, char *);
				_puts(s);
				counter++;
			}
			j++;
		}
	}
	va_end(f_list);

	return (counter);
}
