#include <stdlib.h>
#include "main.h"

/**
* _strdup - return a pointer to newly allocated space in memory
* and duplicate the string it holds to new space
* @str: initial input string
*
* Return: a pointer to the memory allocated which is an array of characeters
*/
char *_strdup(char *str)
{
	size_t i, j;
	char *strdout;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	strdout = (char *)malloc(sizeof(char) * (i + 1));

	if (strdout == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= i; j++)
	{
		strdout[j] = str[j];
	}
	return (strdout);
}
