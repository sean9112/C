#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct st
{
    int chinese, math, english;
    float avg;
};
typedef struct st studant;

int main()
{
    int n, i, j;
    float temp;
    studant *students;

    scanf("%d", &n);
    students = (studant *)malloc(sizeof(studant) * n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &students[i].chinese);
        scanf("%d", &students[i].math);
        scanf("%d", &students[i].english);
        students[i].avg = (students[i].chinese + students[i].math + students[i].math) / 3;
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (students[j].avg < students[i].avg)
            {
                temp = students[j].avg;
                students[j].avg = students[i].avg;
                students[i].avg = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("student[%d].chenese = %d\n", i, students[i].chinese);
        printf("student[%d].math = %d\n", i, students[i].math);
        printf("student[%d].english = %d\n", i, students[i].english);
        printf("student[%d].avg = %g\n", i, students[i].avg);
    }

    return 0;
}