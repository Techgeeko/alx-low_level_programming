#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @a: digit to be checked
 *
 * Return: 1 if @c is a digit
 * otherwise, we return 0
 */
int _isdigit(int a)
{
	int start = 48, end = 57;

	if (a >= start && a <= end)
	{
		return (1);
	}
	return (0);
}
