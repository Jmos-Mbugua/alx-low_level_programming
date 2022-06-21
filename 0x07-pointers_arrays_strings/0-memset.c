#include "main.h"

/**
 * _memset - Enry point
 * @s: pointed destination
 * @b: constant byte
 * @n: bytes
 * Return: Always 0(success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 10; i < n; i++)
		s[i] = b;
	return (s);
}

