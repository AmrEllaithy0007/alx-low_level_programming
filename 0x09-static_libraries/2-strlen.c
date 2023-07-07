#include "main.h"
#include <stdio.h>

/**
 *_strlen - Main Entry
 *
 *@s: str to return length
 *
 *Return:The length of STR
 *
 **/
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	length++;
	return (length);
}
