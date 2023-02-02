#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * Return: If there is no loop - NULL.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *t = head, *h = head;

	if (!head)
		return (NULL);
	do {
		if (h->next == NULL || h->next->next == NULL)
			return (NULL);
		h = h->next->next;
		t = t->next;
	}
       while (t != h);
	t = head;
	while (t != h)
	{
		t = t->next;
		h = h->next;
	}
	return (t);
}
