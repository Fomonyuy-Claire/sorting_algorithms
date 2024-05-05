#ifndef SORT_HEADER
#define SORT_HEADER

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void switch_nodes(listint_t **hd, listint_t **swn1, listint_t *swn2);
void cocktail_sort_list(listint_t **list);
void swap_node_front(listint_t **, listint_t **, listint_t **);
void swap_node_behind(listint_t **, listint_t **, listint_t **);
void counting_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void array_split_recursive(int *, int *, size_t, size_t);
void merge_subarr(int *, int *, size_t, size_t, size_t);
void swap_ints(int *, int *);
void bitonic_merge(int *, size_t, size_t, size_t, char);
void bitonic_sort(int *array, size_t size);
void bitonic_seq(int *, long unsigned int, size_t, long unsigned int, char);
void swap_ints(int *, int *);
int hoare_partition(int *, size_t, int, int);
void hoare_sort(int *, size_t, int, int);
void quick_sort_hoare(int *array, size_t size);

#endif /*SORT_HEADER*/
