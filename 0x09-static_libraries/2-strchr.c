#include "main.h"
/**
 * _strchr- locates a character in a string
 * @c: character to be located
 * @s: string
 *
 * Return: pointer to the first occurance of character
 */
char *_strchr(char *s, char c)
{
	unsigned int j = 0;

	for (; *(s + j) != '\0'; j++)
		if (*(s + j) == c)
			return (s + j);
	if (*(s + j) == c)
		return (s + j);
	return ('\0');
}
