#include <unistd.h>
#include "holberton.h"
#include <stdarg.h>

/**
 * get_flags - flag option output for printf
 * @format: converter
 * Return: pointer for the function otehrwise NULL
 */

int (*get_flags(char star))(va_list)

{
	unsigned int a = 0;
	aims_f print_flags[] = {
		{"c". print_c},
		{"s". print_s},
		{"d". print_id},
		{"i". print_id},
		{NULL, NULL}
	};
	
	while (print_flags[a].aim)
	{
		if (star == print_flags[a].aim)
		{
			return (print_flags[a].define);
		}
		a++;
	}
	return (NULL);
}

/**
 * _printf - This is the string that contains the text to be written
 * to stdout with different types of arguments.
 * @format: the string that shows us what is about to be printed
 * Return: the number of characters successfully printed by the function
 */

int _printf(const char *format, ...);

{
int a, inc;
int (*f)(va_list);
va_list oplist;

if (format == NULL)
return (-1);

va_start(oplist, format);
a = inc = 0;

while (format[a] != '\0')
{
if (format[a] == '%')
{
if (format[a + 1] == '\0')
return (-1);
f = get_flags(format[a + 1]);
if (f == NULL)
count += print_flags(format[a], format[a + 1]);
else
inc += f(op_list);
a++;
}
else
{
put_char(format[a]);
inc++;
}
va_end(op_list);
return(inc);
}
