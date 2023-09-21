#include "monty.h"
/**
 * f_pall - prints elements of the stack
 * @head: Pointer to the stack top element
 * @counter: Unused line number parameter
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
