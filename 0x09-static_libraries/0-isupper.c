#include "main.h"

/**
 *  * int _isupper - check for uppercase character
 *   * @c: is the character to be checked
 *    * Return: 1 if character is uppercase otherwise return 0
 *     */

int _isupper(int c)
{
		if (c >= 'A' && c <= 'Z')
					return (1);
			else
						return (0);
}
