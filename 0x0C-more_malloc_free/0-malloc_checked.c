#include "main.h"
/**
 *malloc_checked - Entry point
 *@b:unsigned integer
 *Return: 98 if success
 *other return: 0
 *
 *
 **/

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);

	return (m);
}
