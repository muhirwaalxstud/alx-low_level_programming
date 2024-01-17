#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string or NULL if insufficient memory.
 */
char *_strdup(char *str)
{
	char *dup_str;
	unsigned int length, i;

	if (str == NULL)
		return (NULL);

	/* Calculate the length of the input string */
	for (length = 0; str[length] != '\0'; length++)
		;

	/* Allocate memory for the duplicated string */
	dup_str = malloc((length + 1) * sizeof(char));

	if (dup_str == NULL)
		return (NULL);

	/* Copy the content of the input string to the new memory space */
	for (i = 0; i <= length; i++)
		dup_str[i] = str[i];

	return (dup_str);
}

