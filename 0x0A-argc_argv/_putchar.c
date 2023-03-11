#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c to school
 * @c: The character to print
 *
 * Return: On sucess 1
 * On error, -1 is returned and ermo is set appropiately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
