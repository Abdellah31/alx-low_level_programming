#include "lists.h"

/**
 * add_nodeint - ADDS A NEW NODE AT THE BEGINNIG OF A LINKED LIST
 * @head: POINTER TO THE FIRST NODE IN THE LIST
 * @n: data to insert in that new node
 *
 * Return: POINTER TO  THE NEW NODE, OR NILL IF IT FAILS
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

