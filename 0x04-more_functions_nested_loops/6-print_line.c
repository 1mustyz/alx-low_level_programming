#include "main.h"

/**
 * print_line - print line depending on the value of n
 * @n: determine how long the line should be
 * Return: Always 0.
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('-');
		}
	}
	_putchar('\n');
}
