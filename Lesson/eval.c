#include <stdio.h>
#include <stdlib.h>
#define lparen 1
#define rparen 2
#define plus 3
#define minus 4
#define divide 5
#define times 6
#define mod 7
#define eos 8
#define operand 0
#define MAX_SIZE 5

int stack[MAX_SIZE];
int top = -1;
char expr[80];

void push(int item)
{
	if (top == MAX_SIZE - 1)
		printf("stack is full\n"); // if stack is full print "stack is full" and return;
	else
		stack[++top] = item; // else push item into stack
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

int getToken(char *symbol, int *n)
{
	//把課本程式KEY進來
	*symbol = expr[(*n)++];
	switch (*symbol)
	{
	case '(':
		return lparen;
	case ')':
		return rparen;
	case '+':
		return plus;
	case '-':
		return minus;
	case '/':
		return divide;
	case '*':
		return times;
	case '%':
		return mod;
	case '\0':
		return eos;
	default:
		return operand;
	}
}

int eval()
{
	//把課本程式KEY進來
	int token;
	char symbol;
	int op1, op2;
	int n = 0;
	int top = -1;
	token = getToken(&symbol, &n);
	while (token != eos)
	{
		if (token == operand)
			push(symbol - '0');
		else
		{
			op2 = pop();
			op1 = pop();
			switch (token)
			{
			case plus:
				push(op1 + op2);
				break;
			case minus:
				push(op1 - op2);
				break;
			case times:
				push(op1 * op2);
				break;
			case divide:
				push(op1 / op2);
				break;
			case mod:
				push(op1 % op2);
			}
		}
		token = getToken(&symbol, &n);
	}
	return pop();
}

int main()
{
	scanf("%s", expr);			  // 輸入43*12+/
	printf("ANSER:%d\n", eval()); // 輸出  ANSWER:4
	system("pause");
}
