#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int _putchar(char c);
void _puts(char *s);
int _printf(const char *format, ...);
int print_c(va_list list);
int print_s(va_list list);
int print_i(va_list i);
int print_d(va_list d);
int print_u(va_list u);
int print_b(va_list b);
int print_o(va_list o);
int print_x(va_list x);
int print_X(va_list X);
int print_p(va_list p);
int print_S(va_list S);
int print_r(va_list r);
int print_R(va_list R);


typedef struct print
{
	char *t;
	int (*print_func)(va_list);
}print_t;

#endif

