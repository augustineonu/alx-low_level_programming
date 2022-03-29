#include "main.h"
#include <stdio.h>

/**
 * _strchr  - function that locates a character in a string
 *
 * @s: character
 * @c: character
 * Return: s
 */
char *_strchr(char *s, char c)
{
	while (s++)
	{
		if (*s == c)
			return s;
	}
	return (0);
}
