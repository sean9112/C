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
        address = key[i] % HASHSIZE; //計算key[i]的位置
        count = 0;
        while (hashtable[address] != -1 && count < HASHSIZE) //若此位址不是空的且計算次數小於位置數
        {
            address = address * key[i] % HASHSIZE; // refhash
            count++;
        }
        if (hashtable[address] == -1) //找到的位置是空的嗎?
        {
            hashtable[address] = key[i]; //把key[i]填入hashtable
        }
        else
        {
            printf("沒有空的位置了"); //沒有空的位置了
            exit(0);
        }
    }

    for (i = 0; i < HASHSIZE; i++)
        printf("%d ", hashtable[i]); //輸出hashtable內容
    printf("\n");

    system("pause");
}
