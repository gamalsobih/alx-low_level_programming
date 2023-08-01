#include "lists.h"

/**
 * add_nodeint - add a new node in the begining .
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
    {
	listint_t *nw;

	nw = malloc(sizeof(listint_t));

	if (nw == NULL)
		return (NULL);

	nw->n = n;
	nw->next = *head;
	*head = nw;

	return (*head);
}
}

