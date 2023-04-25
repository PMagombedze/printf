#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - print arguments
 * @format: arguments format
 *
 * Return: argument
 */
int _printf(const char *format, ...)
{
va_list arg;
int i;
va_start(arg, format);
i = vfprintf(stdout, format, arg);
va_end(arg);
return (i);
}
