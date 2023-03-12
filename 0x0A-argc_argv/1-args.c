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
(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
