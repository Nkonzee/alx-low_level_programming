#include<stdio.h>
#include <stdlib.h>
/**
 * main - Program entry point
 * @argc: Counts arguments
 * @argv: Array that holds argument
 *
 * Return: Return 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int j = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		j = j * atoi(argv[i]);
	}
	printf("%d\n", j);
	return (0);
}
