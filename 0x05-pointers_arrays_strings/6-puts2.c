#include "main.h"
#include <stdio.h>
/**
 * puts2 - skips two charactes
 * @str: string to be loop
 */

void puts2(char *str)
{
	int i, len;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
