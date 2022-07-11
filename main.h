#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int _putchar(char c);
void _puts(char *s);
int _printf(const char *format, ...);
char *print_c(va_list list);
char *print_s(va_list list);
char *print_i(va_list list);


typedef struct type
{
	char ch;
	char *(*print_func)(va_list);
}print;

#endif
