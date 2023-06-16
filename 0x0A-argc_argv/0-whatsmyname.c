#include<stdio.h>
/**
 * main- Entry point
 * @argv: argument holding place
 * @argc: argument count
 *
 * Return: Return 0.
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", *argv);

	return(0);
}
