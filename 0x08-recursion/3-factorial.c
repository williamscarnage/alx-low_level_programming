#include "main.h"
/**
 * factorial - function that prints factorial of a number
 * @n: number to be printed
 * Return: -1 if n is lower than 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 0)
		return (1);
	return (n * factorial(n -1));
}
