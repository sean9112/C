#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 500

void print_big(char *ans)
{
    int i;
    for (i = strlen(ans) - 1; i >= 0; i--){
        printf("%c", ans[i]);
    }
    printf("\n");
}

void big_add(char *op1, char *op2)
{
}

void big_sub(char *op1, char *op2)
{
}

void big_mul(char *op1, char *op2)
{
}

void big_div(char *op1, char *op2)
{
}

int main()
{
    char op1[MAX_SIZE], op2[MAX_SIZE];
    char symbol;
    int op1_len, op2_len;

    while (scanf("%s %c %s", op1, &symbol, op2) != EOF){
        op1_len = strlen(op1);
        op2_len = strlen(op2);
        char op1_tr[op1_len + 1], op2_tr[op2_len + 1];
        int i;
        for (i = 0; i < op1_len; i++){
            op1_tr[i] = op1[op1_len - 1 - i];
        }
        op1_tr[i] = '\0';
        for (i = 0; i < op2_len; i++){
            op2_tr[i] = op2[op2_len - 1 - i];
        }
        op2_tr[i] = '\0';

        switch (symbol){
        case '+':
            big_add(op1_tr, op2_tr);
            break;
        case '-':
            big_sub(op1_tr, op2_tr);
            break;
        case '*':
            big_mul(op1_tr, op2_tr);
            break;
        case '/':
            big_div(op1_tr, op2_tr);
            break;
        }}}