#include  <stdio.h>
#include  <stdlib.h>
#define N 6
int main()
{
    int   a[N]={23,78,45,8,32,56};
    int   i, j, temp;

  
    printf("After Sorting\n");

    for(i = 0; i < N-1; i++) // �^�X��
    {
    	for(j = 1; j < N; j++) // �qa[N-1] scan �� a[i+1] 
    	{
			if(a[j] < a[j-1]) // if a[j]<a[j-1]
			{
				temp = a[j]; //    swap a[j], a[j-1]
				a[j] = a[j-1];
				a[j-1] = temp;
			} 
		}
	}

    for(i=0; i<N; i++)
       printf("%d ", a[i]);
       
       
    system("pause");
}
