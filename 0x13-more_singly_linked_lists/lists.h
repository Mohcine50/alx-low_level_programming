#ifndef LISTS_H_
#define LISTS_H_

#include <stdio.h>

/**
 * struct list - singly linked list
 * @n: integer value
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint
{
	int n;
	struct listint *next;
} listint_t;
size_t print_listint(const listint_t *h);
#endif
