#include <stdlib.h>
#include "lists.h"

/**
 * insert_node - insert node in ordered list
 * @head: pointer to head of list
 * @number: value to insert
 * Return: node address
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new;
	listint_t *current;

	current = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = number;

	if (*head == NULL)
		*head = new;
	else if (number < current->n)
	{
		new->next = current;
		*head = new;
		return (new);
	}
	else
	{
		while (current->next != NULL)
		{
			if (number < current->n)
			{
				current = current->next;
				continue;
			}
			else if (number > current->n && number < current->next->n)
				break;
			current = current->next;
		}
		new->next = current->next;
		current->next = new;
	}
	return (new);
}
