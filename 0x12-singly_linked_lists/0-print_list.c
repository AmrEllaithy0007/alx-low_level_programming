#include "lists.h"
/**
 *list_len - Entry point
 *
 *@h: pointer to the list.
 *Return: number of nodes.
 *
 **/

size_t list_len(const list_t *h)
{
	size_t cont = 0;

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		cont++;
		h = h->next;
	}

	return (cont);
}
