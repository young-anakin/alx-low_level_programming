#include <stdio.h>
#include <stdlib.h>
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
	a++;
	}
	putchar('\n');
	return (0);
}
