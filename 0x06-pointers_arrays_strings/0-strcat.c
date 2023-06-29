#include "main.h"
/**
 *_strcat - Entry point to Concatenate two strings
 *
 *@dest: Char to be concatenate
 *@src: Char to be concatenate
 *
 *Return: Void
 **/

char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
	dest[dlen] = src[i];
	dlen++;
	}
	dest[dlen] = '\0';
	return (dest);
}
