#include "main.h"

/**
 * reverse_array - reverse
 * @a : pointer to int
 * @n : pointer to int
 * Return: no
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int tmp;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
