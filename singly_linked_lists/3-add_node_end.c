#include "lists.h"


int str_rec(char *s)
{
	if (*s != 0)
	{
		return (1 + str_rec(s + 1));
	}
	else
	{
		return (0);
	}
}

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_n;
	list_t *temp = *head;

	new_n = malloc(sizeof(list_t));
	if (new_n == NULL)
		return (NULL);

	new_n->str = strdup(str);
	if (!new_n->str)
	{
		free(new_n);
		return (NULL);
	}
	new_n->len = str_rec(new_n->str);
	new_n->next = NULL;

	if (temp)
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new_n;
	}
	else
		*head = new_n;
	return (new_n);
}