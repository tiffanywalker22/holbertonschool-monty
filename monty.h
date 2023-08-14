#ifndef MONTY_H
#define MONTY_H
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <ctype.h>
#include <sys/types.h>
#include <sys/stat.h>

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

int main(int argc, char *argv[]);
void (*get_op_func(char *token1))(stack_t **stack, unsigned int line_number);
void pall(stack_t **h, unsigned int line_number);
void push(stack_t **h, unsigned int line_number, const char *n);
void pint(stack_t **h, unsigned int line_number);
void pop(stack_t **h, unsigned int line_number);
void swap(stack_t **h, unsigned int line_number);
void _add(stack_t **h, unsigned int line_number);
void nop(stack_t **h, unsigned int line_number);
int add_end_node(stack_t **h, int n);
void delete_end_node(stack_t **h);
void free_dlist(stack_t **h);
int is_number(const char *n);
int is_num(const char *n);
void _add(stack_t **h, unsigned int line_num);
void _sub(stack_t **h, unsigned int line_number);
#endif