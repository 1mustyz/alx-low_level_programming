#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: less than 0 if s1 is less than s2, 0 if they're equal,
 * more than 0 if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int len_s1, len_s2;

	len_s1 = 0;
	len_s2 = 0;
	
	while (s1[len_s1] != '\0')
		len_s1++;

	while (s2[len_s2] != '\0')
		len_s2++;

	return (len_s1 - len_s2);
		
}
