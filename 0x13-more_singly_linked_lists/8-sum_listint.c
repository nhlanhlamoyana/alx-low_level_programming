#include "lists.h"
/**
 * sum_listint - function that returns the sum of all data of a linked list
 * @head: first node in the linked list
 * Return: result of the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
