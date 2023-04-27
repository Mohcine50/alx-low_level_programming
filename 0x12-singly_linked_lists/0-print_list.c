#include "lists.h"

/**
 * print_list - print a the element of the list
 * @list_t:the head or starting point for the print
 * Return: number of the elements
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}