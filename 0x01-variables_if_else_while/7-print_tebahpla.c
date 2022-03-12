#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return:0
 */
int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
	putchar(x);
	x--;
	}
	putchar('\n');
return (0);
}
