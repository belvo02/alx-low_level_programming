#include "main.h"

/**
* print_sign(int n);- print the sign of a number
* @n: parameter to check
* Return: 1 and print + if n is greater than zero
* then 0 and print 0 if n is zero
* then -1 and print - if n is less than zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
		}
	else
	{
		_putchar('-');
		return (-1);
	}
}

