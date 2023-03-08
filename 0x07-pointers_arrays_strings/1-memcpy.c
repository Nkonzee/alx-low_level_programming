#include "main.h"
/**
 * _memcpy - Function that copies memory area
 * @dest: destination of memeory area
 * @src:source from this memory area
 * @n: unsigned integer
 *
 * Return: return dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

		for (k = 0; k < n; k++)
			*(dest + k) = *(src + k);

		return (dest);
}
