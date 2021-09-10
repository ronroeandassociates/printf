#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/** 
 * struct funcionz - a structure containing chars to compare with modifiers and 
 * then decide which is the right function to use
 * @dec: char that we want to decide to
 * @  :
 */

typedef struct functionz

{
char0 aim;
int (*define)(va_list);
} aim_f;

int _putchar(char c)
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);
int print_d(va_list d);
int print_i(va_list i);
int print_p(va_list p);

#endif /*HOLBERTON_H*/
