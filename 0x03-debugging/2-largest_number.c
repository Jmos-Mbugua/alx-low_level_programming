#include "main.h"

/**
 * largest number - returns the largest of 3 numbers
 * @a: 1st integer
 * @b: 2nd intefer
 * @c: 3rd integer
 * Return: Largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
