#include "main.h"
/*
 * print_numbers - prints numbers from zero to nine
 *
 * Return: Always 0(success)
 **/
void print_numbers(void)
{
	int x = '0';
	while (x <= '9')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
