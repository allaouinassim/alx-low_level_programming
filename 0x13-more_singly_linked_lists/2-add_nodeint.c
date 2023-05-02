#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a listint_t list.
 * @head: pointer
 * @n: int
 *
 * Return: to the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *NewNode;

	NewNode = malloc(sizeof(listint_t));
	if (!NewNode)
		return (NULL);

	NewNode->n = n;
	NewNode->next = *head;
	*head = NewNode;

	return (NewNode);
}
