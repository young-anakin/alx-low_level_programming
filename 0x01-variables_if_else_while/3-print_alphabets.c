#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return:0
 */
int main(void)
{
	char x ='a';
	char y = 'A';
	
	while(x <= 'z')
	{
	putchar(x);
	x++;
	}
	while (y <= 'Z')
	{
	putchar(y);
	y++;
	}
	putchar('\n');
	return 0;
}
