#include "main.h"

/**
 * push_t - adds an element to the (top of) stack
 * @head: head of the stack
 * @incrementor: holds integer values
 *
 * Return: nothing
 */

void push_t(stack_t **head, unsigned int incrementor)
{
	int i = 0, n, flag = 0;

	if (monty.arg)
	{
		if (monty.arg[0] == '-')
			i++;
		for (i = 0; monty.arg[i] != '\0'; i++)
		{
			if (monty.arg[i] > 57 || monty.arg[i] < 48)
				flag = 1;
		}
		if (flag == 1)
		{
			fprintf(stderr, "L%u: usage: push integer", incrementor);
			fclose(monty.filename);
			free(monty.buffer);
			free_st(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%u: usage: push integer", incrementor);
		fclose(monty.filename);
		free(monty.buffer);
		free_st(*head);
		exit(EXIT_FAILURE);
	}
	n = atoi(monty.arg);
	if (monty.integer == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}

