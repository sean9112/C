#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    int id;
    char name[20];
    int math;
    int english;
    int computer;
};

int main()
{
    struct student std1;
    struct student std2 = {2, "江小魚", 45, 78, 66};
    struct student std3;
    int total;
    std1.id = 1;
    strcpy(std1.name, "陳會安");
    std1.math = 78;
    std1.english = 65;
    std1.computer = 90;
    std3 = std2;

    printf("學號: %d\n", std1.id);
    printf("姓名: %s\n", std1.name);
    total = std1.math + std1.english + std1.computer;
    printf("成績總分: %d\n", total);
    printf("--------------------\n");
    printf("學號: %d\n", std2.id);
    printf("姓名: %s\n", std2.name);
    total = std2.math + std2.english + std2.computer;
    printf("成績總分: %d\n", total);
    printf("--------------------\n");
    printf("學號: %d\n", std3.id);
    printf("姓名: %s\n", std3.name);
    total = std3.math + std3.english + std3.computer;
    printf("成績總分: %d\n", total);
    return 0;
}