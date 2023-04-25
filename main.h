#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _printf(const char *format, ...);
int _print_number(va_list args);
int _printf_char(va_list args);
int _printf_string(va_list args);
int _all(va_list args, char format);
int _uns(va_list args);
int _hexa(va_list args);
int _hexaup(va_list args);
int _octal(va_list args);
int _number(unsigned int n);
int _allchar(va_list args, char format);

#endif /* MAIN */
