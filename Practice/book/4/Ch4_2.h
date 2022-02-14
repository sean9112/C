#define MAXQUEUE 10
int queue[MAXQUEUE];
int front = -1;
int rear = -1;
extern int isQueueEmpty();
extern int enqueue(int d);
extern int dequeue();