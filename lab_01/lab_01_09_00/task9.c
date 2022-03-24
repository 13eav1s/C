#include <stdio.h>
#include <math.h>


int main(void)
{
    int a;
    int rez = 0;
    int n = 1;
    do
    {
        if (scanf("%d", &a) != 1)
        {
            printf("Неверный ввод!\n");
            return 0;
        }
        if (a >= 0)
        {
            rez += sqrt(a + n);
        }
    }
    while (a >= 0);
    rez *= 1 / n;
    printf("g(x) = %f\n", sin(rez));
    return 0;
}
