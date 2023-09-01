#include <stdio.h>
#include "main.h"

/**
* main - prints number of arguements passed to program
* @argc: number of arguements
* @argv: array of arguements
*
* Return: Always 0 if successful
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
