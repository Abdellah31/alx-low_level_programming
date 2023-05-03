#include "lists.h"

/**

 * free_listint - FREES LINKED LIST

 g* @head: listint_t LIST  TO  BE FREED
 
 
 */
void free_listint(listint_t *head)
{
listint_t *temp;
while (head)
	{
temp = head->next;
free(head);
head = temp;
	}
}
