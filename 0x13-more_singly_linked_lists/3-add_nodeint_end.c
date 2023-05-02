#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a listint_t list.
 * @head: pointer
 * @n: value to be stored in the NewNode
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *NewNode;
	listint_t *temp = *head;

	NewNode = malloc(sizeof(listint_t));
	if (!NewNode)
		return (NULL);

	NewNode->n = n;
	NewNode->next = NULL;
	if (*head == NULL)
	{
		*head = NewNode;
		return (NewNode);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = NewNode;

	return (NewNode);
}
