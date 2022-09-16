#include "main.h"
#include <stdio.h>
/**
 * fizz_buzz - print 1-100
 *
 * Return: Always 0.
 */

void fizz_buzz(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("%s", "FizzBuzz");
		} else if ((i % 5) == 0)
		{
			printf("%s", "Buzz");
		} else if ((i % 3) == 0)
		{
			printf("%s", "Fizz");
		} else
		{
			printf("%d", i);
		}

		printf(" ");
	}
}
