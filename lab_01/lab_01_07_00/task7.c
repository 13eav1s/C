#include <math.h>
#include <stdio.h>


int factorial(int count)
{
    int vlfct = 1;
    for (int i = 1; i <= count; i++)
        vlfct = vlfct * i;
    return vlfct;
}


float f(float x)
{
    float y;
    y = exp(x);
    return y;
}


float s(float x, float e)
{
    float y1 = 1 + x;
    float y2 = y1 + (pow(x, 2) / factorial(2));
    float i = 2;
    while (fabs(y1 - y2) > e)
    {
        i += 1;
        y1 = y2;
        y2 += pow(x, i) / factorial(i);
        }
    return y2;
}


int main(void)
{
    float x, e;
    printf("Введите x и e\n");
    if (scanf("%f %f", &x, &e) != 2)
    {
        printf("Неверный ввод! \n");
        return 1;
    }
    float fx = f(x);
    float sx = s(x, e);
    float d = fabsf(fx - sx);
    float delta = fabsf(fx - sx)/fabsf(fx);
    printf("Приближенное значение s(x): %f\n "
           "Точное значение f(x): %f\n "
           "Абсолютная погрешность ∆: %f\n "
           "Относительная погрешность: %f\n", sx, fx, d, delta);
    return 0;
}
