![0x12. C - printf banner](https://github.com/ronroeandassociates/assets/blob/master/images/0x12_printf_banner.png)

# 0x12. C - printf

### `PROJECT NEEDS TO BE COMPLETED NOT FINISHED`

### Creating printf from scratch

#### Discription

A formatted output conversion C program completed . The program is a recreation of the C standard library function printf from scratch.

Prototype: int \_printf(const char \*format, ...);

#### Usage

To use the \_printf compile all .c files in the repository and include the header holberton.h with any main function.

### Example main.c:

#include "holberton.h"

int main(void)
{
\_printf("Hello, World!");

    return (0);

}

### Compilation:

$ gcc \*.c -o
Output:

$
Hello, World!
$

### Return Value

Upon Working successfully the \_printf returns the number of characters printed (excluding the terminating null byte used to end output to strings). If an error is encountered, the function returns -1.

### Conversion Specifiers

The conversion specifier (introduced by the character %) is a character that specifies the type of conversion to be applied. The \_printf function supports the following conversion specifiers:

d, i
The int argument is converted to signed decimal notation.

### Example:

    _printf("%d\n", 12);
    _printf("%i\n", -7896);

### Output:

12
-7896
b
The unsigned int argument is converted to signed decimal notation.

s
The char \* argument is a pointer to a character array or pointer to a string is printed starting from first element to the end \0 excluding null byte

### Example

    _printf("%s\n", "This is a printf function created from scratch");

### Output:

This is a printf function created from scratch
S
Identical to the S conversion specifier, except any non-printable characters in the array (ie. characters with an ASCII value < 32 or >= 127) are printed as \x followed by the ASCII code value in hexadecimal

Ron Olsen Mikey Shrier
