#include "main.h"

/* _strpbrk - Locates the first occurrence in the string s of any character in the string accept.
 * @s: Pointer to the string to be scanned.
 * @accept: Pointer to the string containing characters to search for.
 * Return: Pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	char *temp = accept;
	while (*s != '\0')
	{
		while (*temp != '\0')
		{
			if (*s == *temp)
				return (s);  /* Return pointer to matching byte */
			temp++;
		}
		s++;
		temp = accept;  /* Reset temp pointer to the start of accept */
	}
	return (NULL);  /* Return NULL if no match found */
}

