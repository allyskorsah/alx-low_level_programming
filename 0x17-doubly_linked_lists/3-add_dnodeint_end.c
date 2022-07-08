#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end of a list
 * @head: pointer to the head pointer of the list
 * @n: data in new node
 * Return: the address of the new element, or NULL if it failed
 * Description: function that adds a new node at the end of a list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)/*si el doble puntero es NULL, no hay nada*/
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->next = NULL;/*le asigno NULL porq va a ser el último nodo*/
	new->n = n;/*le asigno el número que va a llevar*/
	/*si la lista está vacía, simplemente añada new node*/
	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		return (new);
	}
	/*El nuevo nodo lo voy apuntando a cada nodo (desde el head)*/
	/* hasta que llegue a apuntar al último*/
	new->prev = *head;
	/*new->prev->next se refiere al next del nodo anterior*/
	while (new->prev->next)
	{
		new->prev = new->prev->next;
	}
	/*el next del último nodo ya no apunta a NULL sino a new*/
	new->prev->next = new;
	return (new);
}
