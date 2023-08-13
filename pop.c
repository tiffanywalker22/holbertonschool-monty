#include "monty.h"
/**
 * pop - removes node at front of linkedlist
 * @h: head of linked list
 * @line_number: bytecode line number
 */
void pop(stack_t **h, unsigned int line_number)
{
	if (h == NULL || *h == NULL)
	{
		printf("L%u: can't pop an empty stack\n", line_number);
		free_dlist(h);
		exit(EXIT_FAILURE);
	}
	else
		delete_end_node(h);
}
/**
 * is_number - iterates each character of string to check of isdigit
 * @n: integer
 * Return: 0 if is number, else -1 if not
 */
int is_number(const char *n)
{
	int i = 0;

	if (*n == '-')
		i = 1;
	for (; *(n + i) != '\0'; i++)
	{
		if (isdigit(*(n + i)) == 0)
			return (-1);
	}
	return (0);
}