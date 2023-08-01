#include "lists.h"

/**
 * print_listint - prints all the elements of a list.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t gnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		gnodes++;
	}
	return (gnodes);
}
