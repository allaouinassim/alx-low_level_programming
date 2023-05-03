#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at a given position.
 * @head: pointer
 * @idx: index node
 * @n: value
 * Return: depend condition
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *New;
	listint_t *temp = *head;

	New = malloc(sizeof(listint_t));
	if (!New || !head)
		return (NULL);
	New->n = n;
	New->next = NULL;
	if (idx == 0)
	{
		New->next = *head;
		*head = New;
		return (New);
	}
	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			New->next = temp->next;
			temp->next = New;
			return (New);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
