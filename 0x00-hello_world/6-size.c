#include <stdio.h>
/**
 *
 * main - Entry point
 * Return Always 0 (Success)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(d));
	prinf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
       printf("Size of a long int: %lu bytes\n", (unsigned long)sizeof(b));
	printf("size of a long long int: %lu bytes\n", (unsigned long)sizeof(c));
 	printf("size of a float: %lu bytes\n", (unsigned long)sizeof(c));
	return(0);

