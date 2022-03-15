#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 0.
 * On error, 0 is returned, and errno is set appropriately.
 */
 
int main(void)
{
    char word = "_putchar\n";
    
    putchar(word);
	return (0);
}

