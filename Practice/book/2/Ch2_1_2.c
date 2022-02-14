#include <stdio.h>
#include <stdlib.h>

int main()
{
    int courses[6][5] = {{0, 2, 0, 2, 0},
                         {1, 4, 1, 4, 1},
                         {5, 0, 5, 0, 5},
                         {0, 0, 0, 0, 0},
                         {3, 0, 3, 0, 3},
                         {0, 0, 0, 0, 0}};
    int week_no;
    int num;
    int code;
    int sum = 0;
    int i, j;
    printf("請輸入星期(1 到 5). ==> ");
    scanf("%d", &week_no);
    printf("請輸入第幾節課(1 到 6). ==> ");
    scanf("%d", &num);

    code = courses[num - 1][week_no - 1];
    printf("課程代碼: %d\n", code);

    switch (code)
    {
    case 0:
        printf("沒課!\n");
        break;
    case 1:
        printf("計算機概論\n");
        break;
    case 2:
        printf("離散數學\n");
        break;
    case 3:
        printf("資料結構\n");
        break;
    case 4:
        printf("資料庫理論\n");
        break;
    case 5:
        printf("上機實習\n");
        break;
    }
    for (i = 0; i < 6; i++)
        for (j = 0; j < 5; j++)
            if (courses[i][j] != 0)
                sum++;

    printf("上課總節數: %d\n", sum);
    return 0;
}