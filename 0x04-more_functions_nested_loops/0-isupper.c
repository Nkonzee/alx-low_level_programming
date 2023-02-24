#include "main.h"

/**
 * _isupper - check upercase character
 *@c: aurgument that holds upper case
 *Return: Always return 0 (succesful)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')

	{
		return (1);
	}
	else
	{
		return (0);
	}
}
