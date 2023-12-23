#include "main.h"
#include <stdio.h>

/**
 * Determine and output the remaining days in the year for a given date,
 * considering the possibility of leap years
 *@month: Integer representing the month (1-12).
 * @day:Integer indicating the day of the month (1-31)
 * @year: Integer indicating the year value.
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	if (year % 4 == 0 || ((year % 100 == 0) && (year % 400 == 0)))
	{
		if (month > 2 && day >= 60)
		{
			day++;
		}

		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}
