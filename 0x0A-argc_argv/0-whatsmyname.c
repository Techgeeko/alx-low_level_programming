#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number of argumments
 * @argv: array of arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);


	return (0);
}
