#include "main.h"

/**
 * print_numbers - print numbers from 0-9
 * @_putchar: is the command to print
 * Return: void
 */

void print_numbers(void)
{
	char b;

	for (b = '0';  b <= '9'; b++)
	{
		_putchar(b);
	}
	_putchar('\n');
}
