#include "main.h"

/**
 * swap_int - switches the values of two variables
 * @a: the first number to be switched
 * @b: the second number to be switched
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
