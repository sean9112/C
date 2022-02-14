#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#define TRUE 1
#define FALSE 0

struct poly
{
	int degree;
	int coef[MAX];
};

typedef struct poly POLY;

int IsZero(POLY A)
{
	if (A.degree == 0 && A.coef[0] == 0)
		return 1;
	else
		return 0;
}

int Coef(POLY A, int e)
{
	return A.coef[e];
}

int LeadExp(POLY A)
{
	return A.degree;
}

POLY Attach(POLY A, int c, int e)
{
	if (e > A.degree)
		A.degree = e;

	if (A.coef[e] == 0)
		A.coef[e] = c;

	return A;
}

POLY Remove(POLY A, int e)
{
	A.coef[e] = 0;
	for (; A.coef[A.degree] == 0 && A.degree > 0; A.degree--)
		;
	return A;
}

int COMPARE(int x, int y)
{
	if (x < y)
		return -1;
	else if (x == y)
		return 0;
	else
		return 1;
}

POLY ADD(POLY a, POLY b)
{
	int sum, i;
	POLY d = {0};

	if (IsZero(a) && IsZero(b)) //可寫可不寫，寫了速度比較快
		return d;

	while (!IsZero(a) || !IsZero(b)) //原本"&&"AND改"||"OR，可取代下面的兩個while。
	{
		switch (COMPARE(LeadExp(a), LeadExp(b)))
		{
		case -1:
			d = Attach(d, Coef(b, LeadExp(b)), LeadExp(b));
			b = Remove(b, LeadExp(b));
			break;
		case 0:
			sum = Coef(a, LeadExp(a)) + Coef(b, LeadExp(b));
			if (sum)
				d = Attach(d, sum, LeadExp(a));
			a = Remove(a, LeadExp(a));
			b = Remove(b, LeadExp(b));
			break;
		case 1:
			d = Attach(d, Coef(a, LeadExp(a)), LeadExp(a));
			a = Remove(a, LeadExp(a));
			break;
		}
	}

	/*while (!IsZero(a) && IsZero(b))
	{
		d = Attach(d, Coef(a, LeadExp(a)), LeadExp(a));
		a = Remove(a, LeadExp(a));
	}
	while (IsZero(a) && !IsZero(b))
	{
		d = Attach(d, Coef(b, LeadExp(b)), LeadExp(b));
		b = Remove(b, LeadExp(b));
	}*/

	return d; //記得回傳D
}

void printPOLY(POLY A)
{
	int i;

	for (i = A.degree; i >= 0; i--)
	{
		printf("%4d", A.coef[i]);
	}
	printf("\n");
	/*for(i=A.degree;i>=0;i--) //這是直接顯示多項式，記得把上面的for迴圈和printf先Mark掉再取消Mark這段
	{
		if(i==A.degree)
		{
			printf("%d",A.coef[i]);
			if(i==1)
				printf("x",i);
			else if(i>0)
				printf("x^%d",i);
				
		}
		else if(A.coef[i]>0)
		{
			printf("+%d",A.coef[i]);
			if(i==1)
				printf("x",i);
			else if(i>0)
				printf("x^%d",i);
		}
		else if(A.coef[i]<0)
		{
			printf("%d",A.coef[i]);
			if(i==1)
				printf("x",i);
			else if(i>0)
				printf("x^%d",i);
		}
	}
	printf("\n");*/
}

int main()
{
	POLY A = {0};
	A.degree = 4;
	A.coef[4] = 3;
	A.coef[1] = 2;
	A.coef[0] = 1;

	printf("A:");
	printPOLY(A);

	if (IsZero(A))
		printf("A是零多項式\n");
	else
		printf("A不是零多項式\n");

	printf("A是%d次多項式, 最高次係數為%d\n", LeadExp(A), Coef(A, LeadExp(A)));

	A = Attach(A, -6, 5);
	printf("A:");
	printPOLY(A);

	A = Remove(A, 1);
	printf("A:");
	printPOLY(A);
	A = Remove(A, 5);
	printf("A:");
	printPOLY(A);
	A = Remove(A, 4);
	printf("A:");
	printPOLY(A);

	POLY B;
	B.degree = 2;
	B.coef[2] = 1;
	B.coef[1] = 2;
	B.coef[0] = 3;

	printf("B:");
	printPOLY(B);

	POLY D = ADD(A, B);

	printf("D:");
	printPOLY(D);

	system("pause");
}
