#ifndef LISTS_H
#define LISTS_H

#include<stdio.h>
#include<stdlib.h>
/**
 * struct listit_s - singly linked list
 * @n: integer
 * @next: point to the next node
 * description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
#endif