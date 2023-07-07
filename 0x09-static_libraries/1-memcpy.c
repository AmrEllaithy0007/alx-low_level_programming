#include "main.h"
/**
 * _memcpy - Entry point
 *
 *@dest: character of bytes
 *@src: character
 *@n: Integr
 *Return: Alwasy dest (Success)
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
