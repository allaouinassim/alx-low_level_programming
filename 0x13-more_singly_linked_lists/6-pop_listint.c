#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
 * @head: pointer
 *
 * Return: delete data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int Num;

	if (!head || !*head)
		return (0);

	Num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (Num);
}
