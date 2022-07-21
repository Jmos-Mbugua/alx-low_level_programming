#include "main.h"

/**
 * print_binary - prints binary representation
 * of a number
 * @n: unsigned long int.
 *
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	int binary;

	if ( >> 1)
		print_binary(n >> 1);
	binary = n & 1;
	putchar(binary + '0');
}

