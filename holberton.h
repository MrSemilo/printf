# ifndef _HOLBERTON_H_
# define _HOLBERTON_H_

#include <stdarg.h>
/**
 * struct print - Structure string
 * @i: format print
 * @f: Functions to the format
 */
typedef struct print
{
	char *c;
	int (*f)(va_list);
} print;

int _putchar(char c);
int _printf(const char *format, ...);

# endif
