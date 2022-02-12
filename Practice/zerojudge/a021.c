#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 500

int main()
{
    int i;
    char op1[MAX_SIZE], op2[MAX_SIZE];
    char symbol[2];
    int op1_len, op2_len;

    while (scanf("%s %c %s", op1, &symbol, op2) != EOF)
    {

        op1_len = strlen(op1);
        op2_len = strlen(op2);
        char op1_tr[op1_len + 1], op2_tr[op2_len + 1];

        for (i = 0; i < op1_len; i++)
        {
            op1_tr[i] = op1[op1_len - 1 - i];
        }
        op1_tr[i] = '\0';
        for (i = 0; i < op2_len; i++)
        {
            op2_tr[i] = op2[op2_len - 1 - i];
        }
        op2_tr[i] = '\0';

        // switch (symbol[0])
        // {
        // case '+':
        //     /* code */
        //     break;
        // case '-':
        //     /* code */
        //     break;
        // case '*':
        //     /* code */
        //     break;
        // case '/':
        //     /* code */
        //     break;
        // }
    }
}