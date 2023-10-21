#include "monty.h"

/**
 * pall_t - print the stack
 * @head: head of the stack data structure
 * @incrementor: unused bvariable
 *
 * Return: nothing
 */

void pall_t(stack_t **head, unsigned int incrementor)
{
	stack_t *tmp;
	(void) incrementor;

	tmp = *head;
	if (tmp == NULL)
	{
		exit(EXIT_FAILURE);
	}
	while (tmp != NULL)
	{
		printf("%d", tmp->n);
		tmp = tmp->next;
	}
}
