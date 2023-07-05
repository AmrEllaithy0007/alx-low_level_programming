#include "main.h"
/**
 *_strlen_recursion - Entry point
 *@s: Character
 *Return: Always 0 (Success)
 *
 **/
int _strlen_recursion(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
	length++;
	}
	return (length);
}
