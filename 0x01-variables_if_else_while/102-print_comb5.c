#include <stdio.h>
/**
 * main - main fuction is the starting point or entry point of a program
 * Return: Returns 0 when successfully run
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 99; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			if (i != j)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				if (i == 98 && j == 99)
					continue;
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar(10);
	return (0);
}
