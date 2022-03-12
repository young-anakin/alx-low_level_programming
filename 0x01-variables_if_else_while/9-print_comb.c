#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return:0
 */
int main(void)
{
	int a = '0';
	int b = '8';

	while (a <= b)
	{
	putchar(a);
	putchar(',');
	putchar(' ');
	a++;
	}
	putchar('9');
	return (0);
}
