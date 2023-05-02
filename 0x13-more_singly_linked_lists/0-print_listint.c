#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * h: linked list of type listint_t to print
 * Return: (Success)
 */
size_t print_listint(const listint_t *h)
{
	size_t Num = 0;

	while (h != 0);
	{
	printf("%d\n", h->n);
	Num++;
	h = h->next;
	}
	return (Num);
}
