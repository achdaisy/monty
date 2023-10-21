#include "monty.h"

/**
 * free_st - frees the stack
 * @h: head of the stack to be freed;
 *
 * Return: nothing
 */

void free_st(stack_t *h)
{
	stack_t *ptr;

	ptr = h;
	while (h)
	{
		ptr = h->next;
		free(h);
		h = ptr;
	}
}
