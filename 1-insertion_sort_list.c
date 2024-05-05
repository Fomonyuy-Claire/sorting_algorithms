#include "sort.h"

/**
 * switch_nodes - Swap two nodes in a listint_t doubly-linked list.
 * @hd: A pointer to the head of the doubly-linked list.
 * @swn1: A pointer to the first node to swap.
 * @swn2: The second node to swap.
 */
void switch_nodes(listint_t **hd, listint_t **swn1, listint_t *swn2)
{
	(*swn1)->next = swn2->next;
	if (swn2->next != NULL)
		swn2->next->prev = *swn1;
	swn2->prev = (*swn1)->prev;
	swn2->next = *swn1;
	if ((*swn1)->prev != NULL)
		(*swn1)->prev->next = swn2;
	else
		*hd = swn2;
	(*swn1)->prev = swn2;
	*swn1 = swn2->prev;
}

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 *                       using the insertion sort algorithm.
 * @list: A pointer to the head of a doubly-linked list of integers.
 *
 * Description: Prints the list after each swap.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *count, *ins, *hold;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (count = (*list)->next; count != NULL; count = hold)
	{
		hold = count->next;
		ins = count->prev;
		while (ins != NULL && count->n < ins->n)
		{
			switch_nodes(list, &ins, count);
			print_list((const listint_t *)*list);
		}
	}
}
