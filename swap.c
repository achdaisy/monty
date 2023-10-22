#include "monty.h"

/**
 * swap_t - swaps the top elements of teh stack
 * @head: head of the stack
 * @incrementor: line number
 *
 * Return: nothing
 */

void swap_t(stack_t **head, unsigned int incrementor)
{
	stack_t *ptr;
	int len = 0, number;

	ptr = *head;
	while (ptr)
	{
		ptr = ptr->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%u: can't swap, stack too short", incrementor);
		fclose(monty.filename);
		free(monty.buffer);
		free_st(*head);
		exit(EXIT_FAILURE);
	}
	ptr = *head;
	number = ptr->n;
	ptr->n = ptr->next->n;
	ptr->next->n = number;
}
