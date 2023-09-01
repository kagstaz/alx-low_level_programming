#include <stdio.h>
#include "main.h"

/**
* main - prints number of arguements passed to program
* @argc: numer of arguements
* @argv: array of arguements
*
* Return: Always 0 if successful
*/
int main(int argc, char *argv[])
{
(void) argv; /* Ignore argv */
		printf("%d\n", argc - 1);

		return (0);
}
