#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - Print according to a format.
 *
 * @format: Arguments.
 *
 * Return: The number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	print form[] = {
			{" %", printspace}, {"c", printchar}, {"%", printporcent},
			{"s", printstring}, {"i", printint}, {"u", printuint},
			{"X", printhexaMAY}, {"o", printoctal}, {"x", printhexaMIN},
			{NULL, NULL}
			};
	if (!format || (format[i] == '%' && !format[i + 1]))
		return (-1);
	va_start(args, format);

	i = prin(format, args, form);

	va_end(args);

	return (i);
}
