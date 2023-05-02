#include "lists.h"
/**
 * struct listint_s -  prints all the elements of a listint_t list
 * @h: input list
 * Return: Num
 * 
 */
size_t print_listint(const listint_t *h)
{
	size_t Num = 0;

	while (h != NULL)
	{
	printf("%d\n", h->n);
	Num++;
	h = h->next;
	}
	return (Num);
}
