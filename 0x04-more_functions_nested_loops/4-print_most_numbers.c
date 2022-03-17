#include "main.h"
/**
 * print_most_numbers - prints numbers according to their order except 2 and 4
 *
 * Return: Always 0 (Success)
 **/
void print_most_numbers(void)
{
	int x = '0';
	while (x <= '9')
	{
		while (x != '2' && x != '4')
		{
			_putchar(x);
		}
		x++;
	}
}
