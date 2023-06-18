#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: Programme
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int i = 0;
	int k;
	int l;

	while (i < 10)
	{
		k = i + 1;
		while (k < 10)
		{
		l = k + 1;
		while (l < 10)
		{
		if (i != k || i < k || l < k)
	{
		putchar(i + '0');
		putchar(k + '0');
		putchar(l + '0');
		if (i + k + l < 24)
		{
			putchar(',');
			putchar(' ');
		}
	}
		l++;
	}
		k++;
	}
		i++;
	}
	putchar('\n');
	return (0);
}
