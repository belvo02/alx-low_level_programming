#include "main.h"

/**
 * print_rev - This function prints a reverse string
 *
 * @s: This is the input string
 */
void print_rev(char *s)
{
	int ix;

	for (ix = 0; s[ix] != '\0'; ix++)
		;
	for (ix = ix - 1; s[ix] != '\0'; ix--)
	{
		_putchar(s[ix]);
	}
	_putchar('\n');
}
