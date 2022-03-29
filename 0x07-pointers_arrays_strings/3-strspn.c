#include "main.h"
#include <stdio.h>

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: character variable
 * @accept:
 *
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, count = 0;
	
	for (i = 0; s[i] != '\0' && i == count; i++;)
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				count++;
	return (count);
}
