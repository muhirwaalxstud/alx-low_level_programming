#include <stdio.h>

/**
 * main - Demonstrates how to prevent an infinite loop.
 *
 * Description: The main function initializes a counter to avoid an infinite loop.
 *
 * Return: Returns 0 to indicate successful execution.
 */
int main(void)
{
	int counter;

	printf("Warning: Potential infinite loop ahead.\n");

	counter = 0;
	/**
	 * while (counter < 10)
	 * {
	 *     putchar(counter);
	 * }
	 */

	printf("Phew! Dodged the infinite loop.\n");

	return (0);
}

