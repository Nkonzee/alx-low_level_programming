#include <stdio.h>
/**
 * main- main is a staring point block of code
 *
 * Return: The program runs succesful if it;s returns 0
 *
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
