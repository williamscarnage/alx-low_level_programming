#include "main.h"

/**
 * print_alphabet - print all alphabet in lower case
 */

void print_alphabet(void)
{
	char bill;

	for (bill = 'a'; bill <= 'z'; bill++)
		_putchar(bill);
	_putchar('\n');
}
