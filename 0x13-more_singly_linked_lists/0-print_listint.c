#include "lists.h"


/**

* print_listint - prints ALL THE ELEMENTS OF A LINKED LIST
 
 
* @h: LINKED LIST OF TYPE listint_t to print

 
*
 
 
* Return: NUMBER OF NODES
 
 
*/
size_t print_listint(const listint_t *h)
       {
	size_t num = 0;

	while (h)
	       {     
		printf("%d\n", h->n);
		num++;
		h = h->next;
	                    }       

	return (num);
}
