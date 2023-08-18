#include <stdio.h>
#include "main.h"

/**
* main - entry point
*
* Description: prints the numbers from 1 to 100
* But for multiples of 3 it prints Fizz
* for the multiples of 5 it prints Buzz
* for multiples of both 3 and 5 it prints FizzBuzz
*
* Return: always (0)
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
	if (i % 3 == 0)
		printf("Fizz");
	else if (i % 5 == 0)
		printf("Buzz");
	else if (i % 15 == 0)
		printf("FizzBuzz");
	else
		printf("%i", i);
	if (i < 100)
		printf(" ");
	}
	printf("\n");
	return (0);
}
