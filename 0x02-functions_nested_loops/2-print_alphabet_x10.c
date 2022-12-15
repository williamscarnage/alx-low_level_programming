#include "main.h"

/**
 * print_alphabet_x10 - print ten times the alphabet in lower case
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char bill;

	while (count++ <= 9)
	{
	for (bill = 'a'; bill <= 'z'; bill++)
		_putchar(bill);
	_putchar('\n');
	}
}
