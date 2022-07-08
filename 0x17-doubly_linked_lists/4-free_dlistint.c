#include "lists.h"
/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: pointer to the head pointer of the list
 * Return: the address of the new element, or NULL if it failed
 * Description: function that frees a dlistint_t list
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)/*si el doble puntero es NULL, no hay nada*/
		return;
	while (head->next)
	{
		head = head->next;/*head ahora apunta al siguiente nodo*/
		free(head->prev);/*y se elimina el nodo anterior*/
	}
	free(head);/*cuando queda solo un nodo, lo elimina*/
}
