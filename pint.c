#include "monty.h"

/**
 * pint_t - prints the value at the top of the stack
 * @head: head of the stack
 * @incrementor: variable holder for line number
 *
 * Return: nothing
 */

void pint_t(stack_t **head, unsigned int incrementor)
{
	if (*head != NULL)
	{
		printf("%d\n", (*head)->n);
	}
	else
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", incrementor);
       		fclose(monty.filename);
		free(monty.buffer);
		free_st(*head);
		exit(EXIT_FAILURE);
	}
}	
