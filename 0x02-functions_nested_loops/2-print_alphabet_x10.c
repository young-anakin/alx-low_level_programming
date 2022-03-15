#include "main.h"
/**
 * print_alphabet_x10 - print lowercase alphabets 10 times
 **/
void print_alphabet_x10(void)
{
	int w = 0;

	while (w <= 9)
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
