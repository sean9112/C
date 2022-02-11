#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 3

int queue[MAX_SIZE];
int in = 0;	   // addition index
int out = 0;   // deletion index
int count = 0; // item count

void addq(int *q, int item)
{
	// if count is equal to MAX_SIZE-1 then print "queue is full" and return;
	if (count == MAX_SIZE)
		printf("queue is full\n");
	// else add item into queue by in and count++
	else
	{
		queue[in++] = item;
		in = (in) % (MAX_SIZE);
		count++;
	}
	// NOTE: queue is a ring buffer
}

int deleteq()
{
	int data;
	// if count is equal to zero then print "queue is empty and return -1;
	if (count == 0)
	{
		printf("queue is empty\n");
		return -1;
	}
	// else delete a item from the queue by out, count-- and return the item
	else
	{
		data = queue[out];
		out = (out + 1) % MAX_SIZE;
		count--;
		return data;
	}
	// NOTE: queue is a ring buffer
}

int main()
{
	addq(queue, 10);
	addq(queue, 20);
	addq(queue, 30);
	printf("Delete %d\n", deleteq());
	addq(queue, 40);
	addq(queue, 50);
	printf("Delete %d\n", deleteq());
	printf("Delete %d\n", deleteq());
	printf("Delete %d\n", deleteq());
	printf("Delete %d\n", deleteq());
	system("pause");
}
