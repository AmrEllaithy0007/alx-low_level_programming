#include "main.h"
/**
 *swap_int - Main Entry
 *
 *@a:the first int to swap
 *@b:the second int to be swapped
 *
 *Return: Nothing
 **/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
