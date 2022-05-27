#include "lists.h"

/**
 * print_listint - function that prints all elements of a listint_t list
 *
 * @h: pointer to the head of lisint_t list
 *
 * Return: The number of nodes in the listint_t list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
