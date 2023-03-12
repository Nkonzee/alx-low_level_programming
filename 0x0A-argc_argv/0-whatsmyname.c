#include <stdio.h>
#include "main.h"

/**
 * main- Entry point function
 * @argc: number of argurment
 * @argv: array of argurment
 *
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
