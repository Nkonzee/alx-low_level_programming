#include<stdio.h>
/**
 * main- Entry point
 * @argv: argument holding place
 * @argc: argument count
 *
 * Return: on success 1.
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", *argv);

	return(0);
}
