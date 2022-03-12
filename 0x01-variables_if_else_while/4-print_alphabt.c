#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return:0
 */
int main(void)
{
	char x ='a';
	while (x <= 'z')
	{
	while (x != 'q' && x!= 'e')
	{
	putchar(x);
	goto s;
	}
s :
	x++;
	putchar('\n');
	}
return (0);
}
	
