#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @k: k is an integer
 *
 * Return: integer
 */
int _abs(int k)
{
	if (k > 0)
	{
		return (k);
	}
	else if (k < 0)
	{
		return (-k);
	}
	else
	{
		return (k);
	}
}
