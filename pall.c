#include "main.h"

/**
 * pall - print the stack
 * @head: head of the stack data structure
 * @incrementor: unused bvariable
 *
 * Return: nothing
 */

void pall(stack_t **head, unsigned int incrementor)
{
	stack_t *tmp;
	(void) incrementor;

	tmp = *head;
	if (tmp == NULL)
	{
		return
	}
	while (tmp != NULL)
	{
		printf("%d", tmp->n);
		tmp = tmp->next;
	}
}
