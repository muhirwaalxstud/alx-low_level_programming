#include "main.h"

/*
 * _memcpy - Copies n bytes from the memory area src to dest.
 * @dest: Pointer to the destination memory area.
 * @src: Pointer to the source memory area.
 * @n: Number of bytes to copy.
 *
 * Description: This function copies n bytes from src to dest.
 * Return: Pointer to the destination memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest++ = *src++;
	}

	return (start); /* Parentheses added around the return statement */
}


