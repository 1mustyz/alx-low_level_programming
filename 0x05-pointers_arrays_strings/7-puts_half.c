#include "main.h"
#include <stdio.h>

/**
 * puts_half - print halsf of  string
 * @str: string to print it half
 */

void puts_half(char *str)
{
	int i, len, n;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
	} else
	{
		n = len / 2;
	}

	for (i = 0; i < n; i++)
	{
		_putchar(str[i + n]);
	}
	_putchar('\n');
}
