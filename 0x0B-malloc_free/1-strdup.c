#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate string to new pointer
 * @str: string to duplicate
 *
 * Return: pointer which duplicates string on sucess
 * and NULL if string is null or memory error occurs,
 **/

char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i, dup;

	i = 0;
	dup = 0;

	if (str == NULL)
		return (NULL);

	while (str[dup])
		dup++;
	duplicate = malloc(sizeof(char) * (dup + 1));

	if (duplicate == NULL)
		return (NULL);
	while ((duplicate[i] = str[i]) != '\0')
		i++;
	return (duplicate);
}
