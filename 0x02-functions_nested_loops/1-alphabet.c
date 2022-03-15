#include "main.h"
/**
 * print_alphabet - print lowercase alphabets
 **/
void print_alphabet(void)
{
	char w = 'a';
	int x = 0;

	while (x < 26)
	{
		_putchar(w);
		w++;
		x++;
	}
	_putchar('\n');
}
