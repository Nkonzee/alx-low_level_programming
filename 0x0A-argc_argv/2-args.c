#include<stdio.h>
/**
 * main - Program entry point
 * @argc: Counts all arguments in a program
 * @argv: Array that holds all arguments as string in a program
 *
 * Return: Return 0.
 *
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
