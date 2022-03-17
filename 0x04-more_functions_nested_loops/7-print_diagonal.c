#include "main.h"
/*
 * print_diagonal - prints numbers in a diagonal
 * @n - the appearing agent
 * */
void print_diagonal(int n)
{
	int a = '\\';
	for(int i=0; i < n; i++)
	{
		for(int j=0;j<i;j++)
        	{
            		_putchar(' ');
        	}
	_putchar(a);
        _putchar('\n');
        }
}
