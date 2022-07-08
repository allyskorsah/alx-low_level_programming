#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning of a list
 * @head: pointer to the head pointer of the list
 * @n: data in new node
 * Return: the address of the new element, or NULL if it failed
 * Description: function that adds a new node at the beginning of a list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)/*si el doble puntero es NULL, no hay nada*/
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	/*verificar malloc**/
	if (new == NULL)
		return (NULL);
	new->prev = NULL;/*le asigno NULL porq va a ser el nuevo nodo*/
	new->n = n;/*le asigno el número que va a llevar*/

	new->next = *head;

	/*Mientras la lista no esté vacía*/
	if (*head != NULL)
		(*head)->prev = new;/*Ahora new está al inicio de la lista*/

	*head = new;
	return (new);
}
