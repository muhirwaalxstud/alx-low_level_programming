#include "main.h"

/*
 * _strchr - Locates the first occurrence of the character c in the string s.
 * @s: Pointer to the string to search.
 * @c: Character to locate.
 *
 * Return: Pointer to the first occurrence of c in s, or NULL if not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s); /* Return pointer to the first occurrence of c */
		}
		s++; /* Move to the next character in the string */
	}

	if (c == '\0')
	{
		return (s); /* If c is the null terminator, return pointer to it */
	}

	return (NULL); /* Return NULL if c is not found in s */
}

