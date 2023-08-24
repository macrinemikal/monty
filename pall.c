#include "monty.h"
/**
 * f_pall: prints all values in stack
 * @head:  head of stack
 * @counter: not specified of integer
 * Return: no return
 */
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *f;
	(void)counter;

	f = *head;
	if (f == NULL)
		return;
	while (f)
	{
		printf("%d\n", f->n);
		f = f->next;
	}
}
