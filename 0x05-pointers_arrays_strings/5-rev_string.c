#include "main.h"

/***
 * rev_string - Reverse a string
 * @s: input string
 * Return: string in reverse
 */
void rev_string(char *s)
{
	char rev = s[o];
	int counter = 0;
	int i;

	while (s[count] != '\0')
		counter++;
	for (i = 0; i < counter; i++)
	{
		count--;
		rev = s[i];
		s[i] s[count];
		s[count] = rev;
	}
}
