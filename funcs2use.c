#include "holberton.h"
#include <limits.h>

/**
 * put_char - function that prints a char to stdout -c
 * @args: argument/operation for the function
 * Return: -1
 */

int print_c(va_list ops)
{
	return (putchar(va_arg(ops, int)));
}	
	
/**
 * print_string - function that prints a string of 
 * characters/incrementing one at a time - s
 * @ops: arg/operation for function
 * Return: length string
 */

int print_s(va_list ops)
{

int plus;
char *string;

string = (va_arg(ops, char *);
if (string == NULL)
string = "(null)";
for (plus = 0; string[plus] == '\0'; plus++)
print_c(string[plus]);
return (plus);

}

 /**
  * print_nan - (nan means "not a number") prints a character
  * after the % which is nan
  * @first: this will always be the % sign
  * @second: This will always be a char
  * Return: If the second char is a % then 1 else if the first char is a char then 2
  */

int print_p(va_list ops)

{
print_c('%');
return (1);
}

/**
 * print_id - prints an integer for both i and d
 * @ops: the va_list that holds the information
 * Return: printed numer
 */

int print_id(va_list ops)
{
int x, i, l, inc;
x = va_arg(ops, int);
if (x < 0)
{
	write(1, '-', 1);
	i = (x * -1);
}
while (i > 0)
{
	l = (i % 10)
}
}
