#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int last_index = n - 1;
	int temp1, temp2;

	for (; i <= (n - 1) / 2; i++)
	{
		temp1 = a[i];
		temp2 = a[last_index];
		a[i] = temp2;
		a[last_index] = temp1;

		last_index--;
	}
}
