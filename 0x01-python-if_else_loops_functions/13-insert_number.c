#include "lists.h"

/**
 * insert_node - function to insert new node in sorted linked list
 * @head: input pointer to head pointer of singly linked list
 * @number: input number to sort and insert into list as new node
 * Return: pointer to newly added node or NULL if failed
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *newnode = malloc(sizeof(listint_t)), *ptr1, *ptr2;

	if (newnode == NULL)
		return (NULL);
	newnode->n = number;
	newnode->next = NULL;

	if (head == NULL)
	{
		head = &newnode;
		return (newnode);
	}
	if (*head == NULL)
	{
		(*head) = newnode;
		return (newnode);
	}
	if ((*head)->n >= number)
	{
		newnode->next = (*head);
		(*head) = newnode;
		return (newnode);
	}
	ptr1 = (*head);
	ptr2 = (*head);
	while (ptr2->next != NULL && ptr2->next->next != NULL)
	{
		ptr2 = ptr2->next->next;
		if (ptr2->n < number)
			ptr1 = ptr2;
		else if (ptr1->next->n <= number)
		{
			newnode->next = ptr1->next->next;
			ptr1->next->next = newnode;
			return (newnode);
		}
		else if (ptr1->n <= number)
		{
			newnode->next = ptr1->next;
			ptr1->next = newnode;
			return (newnode);
		}
	}
	if (ptr2->next == NULL)
	{
		ptr2->next = newnode;
		return (newnode);
	}
	if (ptr2->next->n <= number)
	{
		ptr2->next->next = newnode;
		return (newnode);
	}
	newnode->next = ptr2->next;
	ptr2->next = newnode;
	return (newnode);
}
