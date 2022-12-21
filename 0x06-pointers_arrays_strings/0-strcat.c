#include "main.h"

/**
 *_strcat(char *dest, char *src) - writes a function that concatenates the string pointed to by @src
 * to the end of the string pointed to by @dest
 * @dest: string to be apoended
 * @src: string to be concatenated
 * Return: returns pointer to @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0; dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
