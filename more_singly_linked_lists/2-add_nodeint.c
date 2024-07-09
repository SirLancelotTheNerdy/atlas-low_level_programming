#include "lists.h"
/**
 * add_nodeint - adds new node to the list
 * @head: head
 * @n: new node
 * Return: value new_node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}