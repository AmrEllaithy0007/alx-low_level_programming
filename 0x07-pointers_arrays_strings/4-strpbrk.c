#include "main.h"

/**
 *_strpbrk - Entry point
 *@s: Character
 *@accept: character
 *Return: Always 0 (Success)
 **/

char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				return (i + s);
		}
	}
	return (NULL);
}
