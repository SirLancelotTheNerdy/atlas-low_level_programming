#include "lists.h"


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last;
	int con;

	if (head == NULL || str == NULL)
		return (NULL);

	last = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	for (con = 0; str[con] != '\0'; con++)
		;

	new->len = con;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (last->next != NULL)
		last = last->next;
	last->next = new;

	return (new);
}