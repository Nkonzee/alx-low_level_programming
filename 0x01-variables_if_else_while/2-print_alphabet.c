#include <stdio.h>
/**
 *main-main fuction
 *Return: 0 (Succes
 */
int main(void)
{
	char lw;

	lw = 'a';

	while (lw <= 'z')
	{
		putchar(lw);
		lw++;
	}
	putchar(10);
	return (0);
}
