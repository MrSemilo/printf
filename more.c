#include <stdarg.h>
#include "holberton.h"
#include <stdio.h>

/**
 * prin - write characters standard output and classified by format.
 * @format: are all different formats type.
 * @args: list of arguments.
 * @form: struct type.
 * Return: lenght all format printed - print formatted.
 */
int prin(const char *format, va_list args, print form[])
{
	int i = 0, j = 0, count = 0;

	while (format != NULL && format[i] != '\0')
	{
	if (format[i] == '%')
	{
	if (format[i + 1] == '\0')
	return (-1);

	if (format[i + 1] == ' ')
	i++;

	while (j < 12)
	{
	if (format[i + 1] == form[j].c[0])
	{
		count += form[j].f(args);
		i++;
		break;
	}
	if (j == 11 && format[i + 1] != form[j].c[1])
	{
		if (!format[i + 1])
		return (-1);

		else
		count += _putchar(format[i]);
	} j++;
	}
	}
else
{
_putchar(format[i]);
count++;
}
i++;
j = 0;
}
return (count);
}
