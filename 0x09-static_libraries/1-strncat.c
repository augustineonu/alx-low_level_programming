#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: destination
 * @src: source.
 * @n: n amount of bytes used from src.
 * Return: The pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;

	while (dest[a] != '\0')
		a++;
	b = 0;
	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
