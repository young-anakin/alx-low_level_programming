#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return:0
 */
int main(void)
{
	char a = '0';
	char b = '9';

	while (a <= b)
	{
	putchar(a);
	a++;
	}
	putchar('\n');
	return (0);
}
