#include "lists.h"


void free_list(list_t *head)
{
	list_t *move;

	while (head != NULL)
	{
		move = head;
		head = move->next;
		free(move->str);
		free(move);
	}
}