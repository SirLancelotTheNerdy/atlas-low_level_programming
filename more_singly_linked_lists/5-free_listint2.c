#include "lists.h"
/**
 * free_listint2 - frees list
 * @head: head
 * Return: void
 */
void free_listint2(listint_t **head)
{
	while (*head)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}