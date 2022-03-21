#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string that is input
 */
int _strlen(char *s)
{
	int count = 0;
	int i = 0;
	
	while (s[i] != '\0')
	{
		count ++;
	}
	return count;
}
