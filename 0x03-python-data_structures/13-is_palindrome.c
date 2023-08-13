#include "lists.h"
/**
 * is_palindrome - checks for a linked list in palindrome
 * @head: a pointer  to the linked list
 * Return: 1 if is palindrome (Success), 0 if not palindrome (Fail)
 */

int is_palindrome(listint_t **head)
{
	listint_t *pointer, *first, *last = NULL;

	if (*head == NULL)
		return (1);
	first = *head;
	while (first != last)
	{
		pointer = first;
		while (pointer->next && pointer->next != last)
			pointer = pointer->next;
		last = pointer;
		if (first->n != last->n)
			return (0);
		if (first == last)
			break;
		first = first->next;
	}
	return (1);
}

