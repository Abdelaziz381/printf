#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib>

/**
 * Abdelaziz
 */
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list val);
int print_str(va_list val);
int _strlen(char *s);
int _strlens(const char *s);

/**
 * task 3
 */

int print_unsigned(va_list args);
int print_oc(va_list val);
int print_hex(va_list val);

/**
 * task 5
 */

int print_EXTra_hex(unsigned int n);

/**
 * Aymane
 */
// i added these prototypes from print_int.c
int print_d(va_list args);
int print_i(va_list args);
int print_bin(va_list val);


int print_dec(va_list args);
#endif
