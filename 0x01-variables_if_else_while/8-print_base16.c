#include <stdio.h>

/**
 * main- main is the starting point of the program
 *
 * Return: Program runs successful if it's return 0
 *
 */

int main(void)
{
	int j;
	char i;

	for (j = '0'; j <= '9'; j++)
	{
		putchar(j);
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
