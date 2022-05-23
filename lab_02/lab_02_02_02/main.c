#include <stdio.h>

#define INPUT_ERROR 1
#define VALUE_ERROR 2
#define COLELEMS_ERROR 3
#define N 10


int compare(int num)
{
    int save = num;
    int e1 = num % 10;
    int e2;
    while (num != 0)
    {
        e2 = num;
        num /= 10;
    }
    if (e1 == e2 || save == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int main()
{
    int a[N], b[N];
    int col;
    printf("Введите количество элементов: ");
    if (scanf("%d", &col) != 1)
    {
        printf("Неверный ввод!\n");
        return INPUT_ERROR;
    }
    if (col > 10 || col < 1)
    {
        printf("Слишком много/мало элементов!\n");
        return VALUE_ERROR;
    }
    for (int i = 0; i < col; i++)
    {
        if (scanf("%d", &a[i]) != 1)
        {
            printf("Неверный ввод!\n");
            return INPUT_ERROR;
        }
    }
    int j = 0;
    for (int i = 0; i < col; i++)
    {
        if (compare(a[i]))
        {
            b[j] = a[i];
            j++;
        }
    }
    if (j == 0)
    {
        printf("Нет элементов, удовлетворяющих условию\n");
        return COLELEMS_ERROR;
    }
    for (int i = 0; i < j; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");
    return 0;
}
