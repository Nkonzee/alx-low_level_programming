#include "main.h"
/**
 * _puts - prints
 * @str: ggfhfh
 * Return: 0
 */
void _puts(char *str)
{
	int k, j;
	char *text = str;

	k = 0;
	while (text[k] != '\0')
	{
		k++;
	}
	for (j = 0; j < k; j++)
	{
	_putchar(text[j]);
	}
	_putchar('\n');
}
