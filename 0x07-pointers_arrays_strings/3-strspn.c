#include "main.h"

/*
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to be scanned.
 * @accept: Pointer to the string containing the characters to match.
 *
 * Return: Number of bytes in the initial segment of s that consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;

	while (*s)
	{
		found = 0;
		while (*accept)
		{
			if (*s == *accept)
			{
				found = 1;
				break;
			}
			accept++;
		}
		if (found)
		{
			count++;
			s++;
			accept = accept - count;
		}
		else
		{
			break;
		}
	}

	return (count);
}

