#include "lists.h"
/**
 * add_nodeint - function adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: new node to be added
 * Return: the address of the new element or null if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
