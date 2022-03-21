#include "main.h"
/*
 * print_rev - prints a string, in reverse, followed by a new line
 * @s - string to be reversed
 **/
void print_rev(char *c)
{
	int i = 0;
	int count =0;

	while (c[i] != '\0')
	{
	count++;
	i++;
	}
	while (count+1 != 0)
	{
	_putchar(c[count]);
	count --;
	}
	_putchar('\n');
}
