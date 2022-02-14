#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score[10] = {76, 85, 90, 67, 59, 79, 82, 95, 91, 65};
    int num;
    int grade;
    int i, choice;
    int doit = 1;

    while (doit)
    {
        printf("----選單----\n");
        printf("1: 查詢成績\n");
        printf("2: 修改成績\n");
        printf("3: 顯示成績\n");
        printf("4: 離開作業\n");
        printf("請輸入選項( 1 到 4 ). ==> ");
        scanf("%d", &choice);
        if (choice < 3)
        {
            printf("請輸入學生學號( 0 到 9 ). ==> ");
            scanf("%d", &num);
        }
        switch (choice)
        {
        case 1:
            grade = score[num];
            printf("學生成績: %d\n", grade);
            break;
        case 2:
            grade = score[num];
            printf("原來學生成績: %d\n", grade);
            printf("輸入新成績. ==> ");
            scanf("%d", &grade);
            score[num] = grade;
            break;
        case 3:
            printf("學生成績: \n");
            for (i = 0; i < 10; i++)
                printf("%d:%d ", i, score[i]);
            printf("\n");
        case 4:
            doit = 0;
            break;
        }
    }
    return 0;
}