#include <stdio.h>
#include "main.h"
/**
 * main- prints the number od argurments passed to the program
 * @argc: number of argurments
 * @argv: array of argurments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)

	printf("%s\n", argv[j]);
	return (0);
}
