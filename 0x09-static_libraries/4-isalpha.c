#include "main.h"

/**
 *  * _isalpha - check for an alphabetic character
 *   * @c: is the character to be checked
 *    * Return: 1 if character is an alphabet, otherwise return 0
 *     */

int _isalpha(int c)
{

		if ((c >= 'a'  && c <= 'z') || (c >= 'A' && c <= 'Z'))
					return (1);
			else
						return (0);
}
