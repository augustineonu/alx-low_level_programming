#include "main.h"
/**
 * _memset - function that fills the first bytes
 * @s: pointer
 * @b: character variable
 * @n: unsigned int
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	
	i = 0;
	while (i < n)
	
	{
		s[i] = b;
		i++;
	}
	return (s);
}
