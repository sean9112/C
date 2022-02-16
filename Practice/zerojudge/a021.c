#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 500

void char_to_int(char *char_op, int *int_op)
{
    int i;
    for (i = 0; char_op[i] != '\0'; i++)
    {
        int_op[i] = char_op[i];
        int_op[i] = int_op[i] - 48;
    }
}

void big_add(int *op1, int *op2)
{
    int i, carry, ans[MAX_SIZE] = {0};
    for (i = carry = 0; i < MAX_SIZE; i++)
    {
        ans[i] = (op1[i] + op2[i] + carry) % 10;
        carry = (op1[i] + op2[i] + carry) / 10;
    }
    for (i = MAX_SIZE - 1; ans[i] == 0; i--)
        ;
    while (i >= 0)
    {
        printf("%d", ans[i]);
        i--;
    }
    printf("\n");
}

void big_sub(int *op1, int *op2)
{
}

void big_mul(int *op1, int *op2)
{
}

void big_div(int *op1, int *op2)
{
}

int main()
{
    char char_op1[MAX_SIZE], char_op2[MAX_SIZE];
    char symbol;
    int op1_len, op2_len;

    while (scanf("%s %c %s", char_op1, &symbol, char_op2) != EOF)
    {
        op1_len = strlen(char_op1);
        op2_len = strlen(char_op2);
        char op1_tr[op1_len + 1], op2_tr[op2_len + 1];
        int i;

        for (i = 0; i < op1_len; i++)
        {
            op1_tr[i] = char_op1[op1_len - 1 - i];
        }
        op1_tr[i] = '\0';
        for (i = 0; i < op2_len; i++)
        {
            op2_tr[i] = char_op2[op2_len - 1 - i];
        }
        op2_tr[i] = '\0';

        int int_op1[MAX_SIZE] = {0}, int_op2[MAX_SIZE] = {0};

        char_to_int(op1_tr, int_op1);
        char_to_int(op2_tr, int_op2);

        switch (symbol)
        {
        case '+':
            big_add(int_op1, int_op2);
            break;
        case '-':
            big_sub(int_op1, int_op2);
            break;
        case '*':
            big_mul(int_op1, int_op2);
            break;
        case '/':
            big_div(int_op1, int_op2);
            break;
        }
    }
}