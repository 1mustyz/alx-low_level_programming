#include "main.h"

/**
 * _puts - print out a string
 * @str: contains a string 
 * Return: Always 0.
 */

void _puts(char *str)
{
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
