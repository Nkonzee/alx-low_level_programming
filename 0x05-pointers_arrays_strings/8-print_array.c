#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints the elements of an array
 * @a: pointer of int type as ver 1
 * @n: second ver parameter
 *
 */

void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		printf("%d", a[m]);
		if (m < n - 1)
			printf(", ");
	}
	putchar('\n');
}
