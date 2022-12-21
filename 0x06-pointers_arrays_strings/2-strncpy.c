#include "main.h"

/**
 * _strncpy - Copies at most inputted number
 *		of bytes from string scr into dest
 * @dest: The buffer storing the string copy.
 * @src: The source string
 * @n: The maximum number of bytes to be copies from src
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (src[i++])
		j++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = j; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
