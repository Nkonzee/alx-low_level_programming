#include <stdio.h>

/**
 * main -main function is an  entry poit
 *
 * Return: give 0 for successful run
 *
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
