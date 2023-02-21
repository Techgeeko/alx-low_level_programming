#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The charater to print
 * Return: Always 1 (Success)
 * On error, -1 is returned, and error is set appropiately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
