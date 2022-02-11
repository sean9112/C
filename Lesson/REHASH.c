#include <stdio.h>
#include <stdlib.h>
#define HASHSIZE 13
int main()
{
    int key[7] = {62, 42, 13, 57, 8, 60, 73};
    int hashtable[HASHSIZE];
    int i, address, count = 0;

    //clrscr();
    for (i = 0; i < HASHSIZE; i++)
        hashtable[i] = -1;

    for (i = 0; i < 7; i++)
    {
        address = key[i] % HASHSIZE; //�p��key[i]����m
        count = 0;
        while (hashtable[address] != -1 && count < HASHSIZE) //�Y����}���O�Ū��B�p�⦸�Ƥp���m��
        {
            address = address * key[i] % HASHSIZE; // refhash
            count++;
        }
        if (hashtable[address] == -1) //��쪺��m�O�Ū���?
        {
            hashtable[address] = key[i]; //��key[i]��Jhashtable
        }
        else
        {
            printf("�S���Ū���m�F"); //�S���Ū���m�F
            exit(0);
        }
    }

    for (i = 0; i < HASHSIZE; i++)
        printf("%d ", hashtable[i]); //��Xhashtable���e
    printf("\n");

    system("pause");
}
