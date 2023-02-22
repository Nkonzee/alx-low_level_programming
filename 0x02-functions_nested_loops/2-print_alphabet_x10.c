#include "main.h"
/**
 *print_alphabet_x10- Program entry point
 *
 * Return: always returns 0 (success)
 */
void print_alphabet_x10(void)
{
	int n;
	int m;

	for (m = 1; m <= 10; m++)
	{
	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar(10);
	}
}
