#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all elements
 * @h: head node
 * Return: number of items
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		printf("%u\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
