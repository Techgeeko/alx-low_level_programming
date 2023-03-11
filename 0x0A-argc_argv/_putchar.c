#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c tto stdout
 * @c: the character to print
 *
 * Return: On success 1
 * On error -1 is returned and ermo is appropiately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
