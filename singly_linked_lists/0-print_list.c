#include "lists.h"


size_t print_list(const list_t *h)
{
	size_t con = 0;
	const list_t *move = h;

	if (h == NULL)
		return (0);

	while (move != NULL)
	{
		if (move->str)
			printf("[%d] %s\n", move->len, move->str);
		else
			printf("[0] (nil)\n");
		move = move->next;
		con++;
	}
	return (con);
}