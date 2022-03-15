#include "main.h"
/**
 * main - Entry point
 * Return:0
 */
void print_alphabet_x10(void)
{
	int w = 0;
	while (w < 9)
	{
	char x = 'a';
	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	w++;
	_putchar('\n');
	}
}
