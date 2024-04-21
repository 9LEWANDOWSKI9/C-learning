#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//int main()
//{
//	typedef struct node
//	{
//		struct node* next;
//	}NODE;
//	NODE* ptr, * start;
//	NODE* new;
//	start = ptr;
//	if (ptr == NULL)
//	{
//		ptr = new;
//		new->next = NULL;
//	}
//	else
//	{
//		while (ptr->next != NULL)
//			ptr = ptr->next;
//		ptr->next = new;
//		new->next = NULL;
//		ptr = start;
//	}
//	return 0;
//}


#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node* next;
	struct node* prev;
} Node;

void LEWANDOWSKI(Node* tail)
{
	Node* current = tail;

	while (current != NULL)
	{
		printf("%d ", current->data);
		current = current->prev;
	}
}

int main()
{
	Node* head = NULL;
	Node* tail = NULL;
	LEWANDOWSKI(tail);
	return 0;
}
