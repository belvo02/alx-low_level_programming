#include "main.h"
/**
* print_alphabet_x10 - prints out lowercase
* alphabet on ten different lines in a column
*/
void print_alphabet_x10(void)
	{
	int count = 0;
	char alp;

	while (count++ <= 9)

	{
		_putchar('\n');

		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}
	}
	}

