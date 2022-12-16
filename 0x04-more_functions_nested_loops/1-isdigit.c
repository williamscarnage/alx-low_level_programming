#include "main.h"

/**
 * int _isdigit - check if a character is a digit
 * @c: is the character to be checked
 * Return: 1 if character is a digit otherwise return 0
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
