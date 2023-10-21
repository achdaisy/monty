#include "monty.h"

/**
 * pop_t - removes an element from the stack
 * @head: head of the stack
 * @incrementor: variable to hold integer values(its unused)
 *
 * Return: nothing
 */

void pop_t(stack_t **head, unsigned int incrementor)
{
	stack_t *top;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", incrementor);
		fclose(monty.filename);
		free(monty.buffer);
		free_st(*head);
		exit(EXIT_FAILURE);
	}
	top = *head;
	*head = top->next;
	free(top);
}
