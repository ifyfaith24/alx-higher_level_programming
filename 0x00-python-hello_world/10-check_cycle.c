#include "lists.h"

/**
* check_cycle - function  that check if singly linked list has a cycle in it
* @list: linked list to check
*
* Return: 0 if no cycle, 1 if cycle
*/

int check_cycle(listint_t *list)
{
	listint_t *ptr;

	if (list == NULL)
		return (0);

	if (list->next == NULL)
		return (0);

	ptr = list;

	while (ptr->next != NULL && ptr->next->next != NULL)
	{
		list = list->next;
		ptr = ptr->next->next;
		if (list == ptr)
			return (1);
	}

	return (0);
}
