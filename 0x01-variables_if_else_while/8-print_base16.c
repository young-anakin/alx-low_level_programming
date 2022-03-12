#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return:0
 */
int main(void)
{
	int x = '0';
	char a = 'a';

	while (x <= '9')
	{
	putchar(x);
	x++;
	}
	while (a <= 'f')
	{
	putchar(a);
	a++;
	}
	putchar('\n');
return (0);
}
