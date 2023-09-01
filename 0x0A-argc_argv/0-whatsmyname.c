#include <stdio.h>
#include "main.h"

/**
* main - prints the name of the program
* @argc: number of arguements
* @argv: array of arguements
*
* Return: Always 0 if successful
*/
int main(int, argc __attribute__((unused)), char *argv[])
{
		print("%s\n", *argv);

		return (0);
}
