#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list val);
int print_str(va_list val);
int _strlen(char *s);
int _strlens(const char *s);
int print_dec(va_list args);
#endif
