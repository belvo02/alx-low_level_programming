#include "main.h"
#include <unistd.h>
/**
 * _putchar- writes C to stdout
 * @c: the character to print
 * Return if successful: On succes 1. on error -1*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

