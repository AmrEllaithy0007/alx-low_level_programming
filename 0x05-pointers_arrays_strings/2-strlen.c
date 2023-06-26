#include "main.h"
#include <stdio.h>

/**
 *_strlen - Main Entry
 *
 *@str: str to return length
 *
 *Return:The length of STR
 *
 **/
size_t  _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
