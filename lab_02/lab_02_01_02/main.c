/*Найти и вывести на экран среднее арифметическое отрицательных элементов массива.*/


#include <stdio.h>
#include <math.h>

#define ERROR 1
#define N 10
#define EPS 0.001


double find_aver(double *pa, int n)
{
    double sum = 0, col = 0;
    for (int i = 0; i < n; i++)
    {
        if (pa[i] < 0)
        {
            col++;
            sum += pa[i];
        }
    }
    if (fabs(col) < EPS)
    {
        return 1;
    }
    double rez = sum / col;
    return rez;
}


int main(void)
{
    double arr[N];
    int n;
    printf("Введите количество элементов: ");
    if (scanf("%d", &n) != 1)
    {
        printf("Ошибка ввода");
        return ERROR;
    }
    if (n > 10 || n < 1)
    {
        printf("Ноль < n <= Десять\n");
        return ERROR;
    }
    for (int i = 0; i < n; i++)
    {
        if (scanf("%lf", &arr[i]) != 1)
        {
            printf("Ошибка ввода\n");
            return ERROR;
        }
    }
    double *pa;
    pa = arr;
    double rez = find_aver(pa, n);
    if (rez > 0)
    {
        printf("В массиве нет ни одного отрицательного числа\n");
        return ERROR;
    }
    printf("Среднее арифметическое массива: %lf\n", rez);
    return 0;
}
