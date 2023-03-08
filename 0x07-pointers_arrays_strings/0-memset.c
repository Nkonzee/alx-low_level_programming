#include "main.h"
/**
 * _memset -fill a block of memory with specific value
 *  @b: the constant value
 *  @s: pointing to the starting addrress of the memory
 *  @n: number of bytes to be filled
 *
 *  Return: return a pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

		for (j = 0; j < n; j++)
		*(s + j) = b;

		return (s);
}
