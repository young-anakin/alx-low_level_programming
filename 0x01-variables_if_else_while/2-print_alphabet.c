#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return:0
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
	putchar(x);
	x++;
	}
	putchar('\n');
	return (0);
}
