#include <monty.h>
/**
 * f_pall : prints all values in stack
 * @head : pointer to head of stack
 * counter : line number not specified of integer
 * return : no
 */
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *first;
	(void)counter;

	first = *head;
	if (first == NULL)
		return;
	while (first)
	{
		printf("%d\n", first->n);
		first = first->next;
	}
}
