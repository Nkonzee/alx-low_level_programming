#include "main.h"
/**
 *print_alphabet_x10- Program entry point
 *
 * Return: always returns 0 (success)
 */
void print_alphabet_x10(void)
{
	int n;
	int m = 1;

	for (n = 1; n <= 10; m++)
	{
		_putchar(n);
	}
	for (n = 'a'; n <= 'z'; m++)
	{
		_putchar(10);
	}
}
