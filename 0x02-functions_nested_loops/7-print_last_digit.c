#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (n < 0)
	n = -n;
	_putchar(n + '0');
	return (n);
}
