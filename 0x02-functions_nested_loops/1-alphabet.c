#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char w = 'a';
	int x = 0;
	while(x<26)
	{
		_putchar(w);
		x++;
	}
}
int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}
