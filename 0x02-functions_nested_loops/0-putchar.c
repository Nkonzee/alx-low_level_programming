#include "main.h"
/**
 * main- Entry point of a programm, prints _putchar
 *
 * Return : Always return 0 if not argurement pass to it
 */

int main(void)
{
	char cout[9] = "_putchar";

	int k = 0;
	for (k = 0; k < 9; k++)
	{
		_putchar(cout[k]);
	}
	_putchar(10);
	return (0);
}
