#include "main.h"

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: path
 *
 * Return: 0
 */
monty_type monty = {NULL, NULL, NULL, 0};

int main(int argc, char *argv[])
{
	char *buffer;
	FILE *filename;
	size_t n = 0;
	ssize_t charsread = 1;
	stack_t *stack = NULL;
	unsigned int incrementor = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	filename = fopen(argv[1], "r");
	monty.filename = filename;
	if (!filename)
	{
		fprintf(stderr, "Error can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (charsread > 0)
	{
		buffer = NULL;
		charsread = getline(&buffer, &n, filename);
		monty.buffer = buffer;
		incrementor++;
		if (charsread > 0)
		{
			execw(buffer, &stack, incrementor, filename);
		}
		free(buffer);
	}
	free_st(stack);
	fclose(filename);
	return (0);
}

