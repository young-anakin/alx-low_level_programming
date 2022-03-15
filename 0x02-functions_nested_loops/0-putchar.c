#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Return:0
 */
int main(void)
{
	char x[8] = "_putchar";
	for(int i =0;i<=7;i++)
	{
		_putchar(x[i]);
	}
	_putchar('\n');
	return (0);
}
