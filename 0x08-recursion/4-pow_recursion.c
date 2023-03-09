#include "main.h"
/**
 * _pow_recursion - function that returns the value of x raised by y
 * @x: first input
 * @y: second input
 *
 * Return: returns number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
