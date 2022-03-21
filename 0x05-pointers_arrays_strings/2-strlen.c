#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string that is input
 */
int _strlen(char *s)
{
	int count =0;
	for(int i=0;i<100;i++)
	{
		if(s[i] == '\0')
		{
			break;
		}
		count ++;
	}
}
