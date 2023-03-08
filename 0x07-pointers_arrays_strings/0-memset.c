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
	int i;

	for (; n >  0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
