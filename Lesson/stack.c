#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 5

int stack[MAX_SIZE];
int top = -1;

void push(int *s, int item)
{
	if (top == MAX_SIZE - 1)
		printf("stack is full\n"); // if stack is full print "stack is full" and return;
	else
		s[++top] = item; // else push item into stack
}

int pop()
{
	int item;
	if (top == -1)
	{
		printf("stack is empty\n"); // if stack is empty print "stack is empty and return -1;
		return -1;
	}
	else
	{
		item = stack[top]; // else pop a item from the top of stack ans return the item
		stack[top--] = 0;
		return item;
	}
}

int main()
{
	push(stack, 10);
	push(stack, 20);
	push(stack, 30);
	push(stack, 40);
	push(stack, 50);
	push(stack, 60);
	printf("POP %d\n", pop());
	printf("POP %d\n", pop());
	printf("POP %d\n", pop());
	printf("POP %d\n", pop());
	printf("POP %d\n", pop());
	printf("POP %d\n", pop());
	system("pause");
}
