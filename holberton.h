# ifndef _HOLBERTON_H_
# define _HOLBERTON_H_

#include <stdarg.h>
/**
 * struct print - Structure of string of characters and functions of _printf.
 * @c: format for print
 * @f: Functions to the format
 */
typedef struct print
{
	char *c;
	int (*f)(va_list);
} print;

int _putchar(char c);
int _printf(const char *format, ...);
int printchar(va_list args);
int printstring(va_list args);
int printporcent(va_list args);
int printint(va_list args);
int printspace(va_list args);

# endif
