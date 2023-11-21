#include "lists.h"

/**
 * listint_len - function returns number of elements in linked listint_t list
 * @h: type listint_t to print linked list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
