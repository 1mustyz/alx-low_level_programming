#include "main.h"

/**
 * swap_int - swaps the value of varaibles
 * @a: first variable
 * @b: second variable
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;
	*a = d;
	*b  = c;
}
