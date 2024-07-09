#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of listint_t
 * @head: head
 * @index: node
 * Return: head
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (head != NULL && index > 0)
	{
		head = head->next;
		index--;
	}
	if (head == NULL)
		return (NULL);
	return (head);
}