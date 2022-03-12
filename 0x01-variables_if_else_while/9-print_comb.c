#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return:0
 */
int main(void)
{
	int a = '0';
	int b = '9';

	while (a <= b)
	{
	putchar(a);
	while (a != '9')
	{
	putchar(',');
	putchar(' ');
	goto s;
	}
s:
	a++;
	}
	putchar('\n');
	return (0);
}
