#include <stdio.h>
/**
 *main-  main- Entering point, printing both lower and upper case alphabet
 *
 * Return: 0 (Seccess)
 */
int main(void)
{
	char i;
	char j;

	i = 'a';
	j = 'A';
	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	while (j <= 'Z')
	{
		putchar(j);
		j++;
	}
		putchar(10);
		return (0);

}
