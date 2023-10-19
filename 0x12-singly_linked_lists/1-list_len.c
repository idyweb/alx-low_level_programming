#include "lists.h"
/**
 * list_len - returns the number of elements in a list.
 * @q: singly linked list.
 * Return: num of elements in a linked list
 */
size_t list_len(const list_t *q)
{
	size_t elem;

	elem = 0;
	while (q != NULL)
	{
		q = q->next;
		elem++;
	}
	return (elem);
}
