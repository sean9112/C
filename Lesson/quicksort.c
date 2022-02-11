#include <stdio.h>
#include <stdlib.h>

void quicksort(int *data, int left, int right);
void swap(int *a, int *b);

int main(void)
{
    int i, n = 10, data[10] = {23, 7, 38, 2, 69, 15, 55, 20, 42, 20};

    quicksort(data, 0, 9); // 執行快速排序法

    printf("排序後的結果:\n");
    for (i = 0; i < n; i++)
        printf("%d ", data[i]);

    printf("\n");
    system("pause");
}

void quicksort(int *data, int left, int right)
{
    int pivot, i, j;

    if (left > right) //如果 left 大於等於 right 就return
        return;
    pivot = data[left]; // 將 pivot 設為 data[left]

    i = left + 1; // i設為 left+1
    j = right;    // j 設為 right

    while (1)
    {
        while (i <= right) // 向右找到第一個大於pivot的資料位置
        {
            if (data[i] > pivot) // 找到 data[i] 大於 pivot
                break;           // 跳出迴圈

            i++; // 繼續往右
        }

        while (j >= left + 1) // 向左找到第一個小於pivot的資料位置
        {
            if (data[j] < pivot) // 找到 data[j] 小於 pivot
                break;           // 跳出迴圈

            j--; //繼續往左
        }

        if (i > j) //如果i大於j就跳離迴圈
            break;

        swap(&data[i], &data[j]); //交換 data[i] 和 data[j]
    }

    swap(&data[left], &data[j]); //交換 data[left](即pivot) 和 data[j]

    quicksort(data, left, j - 1);  // 遞迴呼叫quicksort()將  data[left]~data[j-1]排序
    quicksort(data, j + 1, right); //遞迴呼叫quicksort()將 data[j+1]~data[right]排序
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
