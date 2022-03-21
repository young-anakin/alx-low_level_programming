#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string that is input
 * @count: returns the size of the string
 */
int _strlen(char *s)
{
	int count = 0;

	for(int i=0;s[i]!='\0';i++)
	{
	count++;
	}
	return count;
}
