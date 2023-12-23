#include "main.h"

/**
 * getLargest - Determines the largest among three numbers.
 * @num1: The first number.
 * @num2: The second number.
 * @num3: The third number.
 * Return: The largest of the three numbers.
 */
int getLargest(int num1, int num2, int num3)
{
	int biggest;

	if (num1 >= num2 && num1 >= num3)
	{
		biggest = num1;
	}
	else if (num2 >= num1 && num2 >= num3)
	{
		biggest = num2;
	}
	else
	{
		biggest = num3;
	}
	return (biggest);
}

