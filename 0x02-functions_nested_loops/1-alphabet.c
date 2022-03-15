#include "main.h"
/**
 * main - check the code
 * print_alphabet - function
 * Return: Always 0.
 */
void print_alphabet(void)// a description for print_alphabet
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
