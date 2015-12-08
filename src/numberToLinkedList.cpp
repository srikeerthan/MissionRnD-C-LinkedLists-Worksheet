/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) {
	struct node *curr, *prev = NULL;
	if (N == 0)
	{
		curr = (struct node *)malloc(sizeof(struct node));
		curr->num = N;
		curr->next = prev;
		return curr;
	}
	 if (N < 0)
		N = -1*N;
	while (N)
	{
		curr = (struct node *)malloc(sizeof(struct node));
		curr->num = N % 10;
		curr->next = prev;
		prev = curr;
		N = N / 10;
	}
	return prev;
}