#include "main.h"
int _sqrt(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of numbers
 * @n: Number
 *
 * Return: Returns the square root of the number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt -calculate natural sqare root
 * @n: number to calculate the square root
 *
 * Return: the natural square root
 *@i: iterate number
 */
int _sqrt(int n, int i)
{
	int sqt = i + i;

	if (sqt > n)
		return (-1);

	else if (sqt == n)
		return (i);
	else
		return (_sqrt(n, i + 1));
}
