#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string that is input
 * @return: returns the size of the string
 */
int _strlen(char *s)
{
	int count = 0;
	int i = 0;

	while (s[i] != '\0')
	{
	count++;
	i++;
	}
	return (count);
}
