#include "main.h"
#include <stdio.h>

/**
 * main - a function that concatenates two strings
 *
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int a, b;
	
	a = 0;
	while(dest[a] != '\0')
		a++;
	b = 0;
	while(src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[x] = 0;
	return (dest);
}

