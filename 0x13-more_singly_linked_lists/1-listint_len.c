#include "lists.h"

/**
 * listint_len -  returns the number of elements in a linked listint_t list
 * @h: input list
 *
 * Return: Num
 */
size_t listint_len(const listint_t *h)
{
	size_t Num = 0;

	while (h)
	{
	Num++;
	h = h->next;
	}
	return (Num);
}
