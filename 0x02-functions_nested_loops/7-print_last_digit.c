#include "main.h"
/**
 * print_last_digit - prints last digit of a random number
 *@k:variabl integere
 *
 * Return: Always return 0
 */

int print_last_digit(int k)
{
	int  last_digit;

	srand(time(0));

	last_digit = srand() - RAND_MAX/2;

	k = last_digit % 10;

	_putchar(k);
	_putchar(10);
	return (k);
}
