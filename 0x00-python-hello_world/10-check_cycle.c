#include "lists.h"

/**
 * check_cycle - Checks if a singly linked list has a cycle in it
 * @list: singly linked list to check
 * Return: 0 if there is no cycle, 1 if there is a cycle
**/
int check_cycle(listint_t *list)
{
	listint_t *i, *j;

	i = j = list;

	while (i && j && i->next)
	{
		i = i->next->next;
		j = j->next;

		if (j == i)
			return (1);
	}

	return (0);
}
