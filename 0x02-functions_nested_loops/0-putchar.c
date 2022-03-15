#include "main.h"
/**
 * main - Entry point
 * Return:0
 */
int main(void)
{
	char x[8] = "_putchar";
	int i = 0;
	while (x != '\n')
	{
		_putchar(x[i]);
	}
	_putchar('\n');
	return (0);
}
