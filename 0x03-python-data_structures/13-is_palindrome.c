#include "lists.h"

/**
 * is_palindrome - function to check if singly linked list is a palindrome
 * @head: pointer to head of singly linked list
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(listint_t **head)
{
	listint_t *tmp;
	int count = 0;

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (1);
	tmp = (*head);
	while (tmp->next != NULL && tmp->next->next != NULL)
	{
		count += 2;
		tmp = tmp->next->next;
	}
	if (tmp->next != NULL)
		count++;
	tmp = (*head);
	return (palindrome_check(tmp, count));
}

/**
 * palindrome_check - recursive function to check if listint list is palidrome
 * @tmp_head: pointer to the current head of the list
 * @count: integer count of how many nodes from head to check the end
 * Return: 1 if palindrome, 0 if not
 */

int palindrome_check(listint_t *tmp_head, int count)
{
	listint_t *tmp_end = tmp_head;
	int count2 = 0;

	for (count2 = 0; count2 < count; count2++)
		tmp_end = tmp_end->next;
	
	if (count <= 0)
		return (1);
	
	if (tmp_head->n != tmp_end->n)
		return (0);
	
	tmp_head = tmp_head->next;
	count -= 2;
	return (palindrome_check(tmp_head, count));
}
