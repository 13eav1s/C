/* Принять с клавиатуры координаты 𝑥𝑎, 𝑦𝑎, . . . , 𝑦𝑐, треугольника 𝑎𝑏𝑐 на
 * плоскости.
 * Найти и вывести на экран периметр 𝑃 треугольника.*/
#include <stdio.h>
#include <math.h>


int main(void)
{
    float xa, ya, xb, yb, xc, yc;
    printf("Введите xa, ya, xb, yb, xc, yc: \n");
    if (scanf("%f %f %f %f %f %f", &xa, &ya, &xb, &yb, &xc, &yc) != 6)
    {
        printf("Неверный ввод!\n");
        return 1;
    }
    else
    {
        float abx = xb - xa;
        float aby = yb - ya;
        float bcx = xc - xb;
        float bcy = yc - yb;
        float acx = xc - xa;
        float acy = yc - ya;
        float lenab = sqrt(pow(abx, 2) + pow(aby, 2));
        float lenbc = sqrt(pow(bcx, 2) + pow(bcy, 2));
        float lenac = sqrt(pow(acx, 2) + pow(acy, 2));
        float p = lenab + lenac + lenbc;
        printf("Периметр заданного треугольника: %f \n", p);
        return 0;
    }
}
