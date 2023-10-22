#include "monty.h"

/**
 * execw - executes the opst instructions
 * @buffer: info
 * @stack: thelinked list
 * @filename: monty file
 * @incr: variable to hold integer values
 *
 * Return: nothing
 */

int execw(char *buffer, stack_t **stack, unsigned int incr, FILE *filename)
{
	instruction_t opst[] = {
		{"push", push_t},
		{"pop", pop_t},
		{"swap", swap_t},
		{"nop", nop_t},
		{"pall", pall_t},
		{NULL, NULL}
		};
	unsigned int i = 0;
	char *cmd;

	cmd = strtok(buffer, " \n\t");
	if (cmd && cmd[0] == '#')
		return (0);
	monty.args = strtok(NULL, " \n\t");
	while (opst[i].opcode && cmd)
	{
		if (strcmp(cmd, opst[i].opcode) == 0)
		{
			opst[i].f(stack, incr);
			return (0);
		}
		i++;
	}
	if (cmd && opst[i].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", incr, cmd);
		fclose(filename);
		free(buffer);
		free_st(*stack);
		exit(EXIT_FAILURE);
	}
	return (1);
}

