#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: head of a list.
 * Return: num of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->x);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
