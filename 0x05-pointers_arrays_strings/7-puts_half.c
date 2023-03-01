#include "main.h"

/**
 * puts_half - function that print last half of a string
 * @str: pointer input
 * Return: void function
 */

void puts_half(char *str)
{
	int n, m, o;

	n = 0;

	while (str[n] != '\0')
		n++;

	if (n % 2 == 0)
		o = n / 2;
	else
		o = (n + 1) / 2;

	for (m = o; m < n; m++)
		_putchar(str[m]);

	_putchar('\n');
}
