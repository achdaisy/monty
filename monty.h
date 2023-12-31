#ifndef MY_MAIN_FILE
#define MY_MAIN_FILE

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <ctype.h>

/*Data Structures*/
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;


/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/*My own custom struct*/

/**
 * struct monty_t - holds the information required to run the instructions
 * @args: command arguments
 * @buffer: contet from getline
 * @filename: the file
 * @integer: an integer
 *
 * Description: custom struct
 */
typedef struct monty_t
{
	char *args;
	FILE *filename;
	char *buffer;
	int integer;
} type_monty;
extern type_monty monty;

/*Function prototypes*/
void pall_t(stack_t **head, unsigned int incrementor);
void free_st(stack_t *h);
int execw(char *buffer, stack_t **stack, unsigned int incr, FILE *filename);
void nop_t(stack_t **head, unsigned int incrementor);
void pint_t(stack_t **head, unsigned int incrementor);
void pop_t(stack_t **head, unsigned int incrementor);
void push_t(stack_t **head, unsigned int incrementor);
void swap_t(stack_t **head, unsigned int incrementor);

#endif
