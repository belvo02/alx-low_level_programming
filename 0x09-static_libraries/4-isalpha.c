#include "main.h"

/**
* _isalpha - check for alphabetic character
*@c: the char to be checked within the code
* Return: 1 if c is an uppercase or lowercase letter
* otherwise 0 if different
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
