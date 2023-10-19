#include "lists.h"

/**
 * print_list - prints all element in list
 * @q: singly linked list.
 * Return: the number of nodes
 */

size_t print_list(const list_t *q)
{
	size_t elem;

	elem = 0;
	while (q != NULL)
	{
		if (q->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", q->len, q->str);
		q = q->next;
		elem++;
	}
	return (elem);
}
