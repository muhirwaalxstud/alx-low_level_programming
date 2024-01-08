#include "main.h"

/*
 * _strstr - Finds the first occurrence of the substring needle in the string haystack.
 * @haystack: Pointer to the string to be searched.
 * @needle: Pointer to the substring to find.
 *
 * Return: Pointer to the beginning of the located substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *start = haystack;
	char *sub = needle;

	while (*haystack != '\0')
	{
		start = haystack;
		sub = needle;

		while (*haystack != '\0' && *sub != '\0' && *haystack == *sub)
		{
			haystack++;
			sub++;
		}

		if (*sub == '\0')
		{
			return (start);  /* Return pointer to the beginning of the located substring */
		}

		haystack = start + 1;  /* Move to the next character in haystack */
	}

	return (NULL);  /* Return NULL if substring not found */
}

