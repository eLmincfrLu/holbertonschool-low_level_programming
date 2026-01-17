#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the first node of the list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;  /* növbəti node-u yadda saxla */
		free(head->str);     /* string-i azad et */
		free(head);          /* node-u azad et */
		head = temp;         /* növbəti node-a keç */
	}
}
