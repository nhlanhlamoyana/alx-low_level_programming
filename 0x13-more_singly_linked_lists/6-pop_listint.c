#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: pointer to the first element to be deleted
 * Return: the head node's data to be returned or 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
