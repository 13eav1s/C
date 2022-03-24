#include <stdio.h>
#include <math.h>

#define EPS 0.001


double line(double x1, double x2, double y1, double y2)
{
    double linex, liney, line;
    linex = x2 - x1;
    liney = y2 - y1;
    line = sqrt(pow(linex, 2) + pow(liney, 2));
    return line;
}


int main(void)
{
    double xa, ya, xb, yb, xc, yc;
    printf("Введите координаты точек xa, ya, xb, yb, xc, yc: \n");
    if (scanf("%lf %lf %lf %lf %lf %lf", &xa, &ya, &xb, &yb, &xc, &yc) != 6)
    {
        printf("Неверный ввод! \n");
        return 1;
    }
    double ab, bc, ac;
    ab = line(xa, xb, ya, yb);
    bc = line(xb, xc, yb, yc);
    ac = line(xc, xa, yc, ya);
    double p = ab + ac + bc;
    double pp = p / 2;
    double s = sqrt(pp * (pp - ab) * (pp - bc) * (pp - ac));
    if (s <= EPS)
    {
        printf("Треугольника не существует \n");
        return 1;
    }
    if ((ab >= bc) && (ab >= ac))
    {
        if (fabs(pow(ab, 2) - pow(bc, 2) - pow(ac, 2)) < EPS)
        {
            printf("1\n");
            return 0;
        }
        else if (pow(ab, 2) > (pow(bc, 2) + pow(ac, 2)))
        {
            printf("2\n");
            return 0;
        }
        else if (pow(ab, 2) < (pow(bc, 2) + pow(ac, 2)))
        {
            printf("0\n");
            return 0;
        }
    }
    else if ((bc >= ab) && (bc >= ac))
    {
        if (fabs(pow(bc, 2) - pow(ab, 2) - pow(ac, 2)) < EPS)
        {
            printf("1\n");
            return 0;
        }
        else if (pow(bc, 2) > (pow(ab, 2) + pow(ac, 2)))
        {
            printf("2\n");
            return 0;
        }
        else if (pow(bc, 2) < (pow(ab, 2) + pow(ac, 2)))
        {
            printf("0\n");
            return 0;
        }
    }
    else if ((ac >= bc) && (ac >= ab))
    {
        if (fabs(pow(ac, 2) - pow(bc, 2) - pow(ab, 2)) < EPS)
        {
            printf("1\n");
            return 0;
        }
        else if (pow(ac, 2) > pow(ab, 2) + pow(bc, 2))
        {
            printf("2\n");
            return 0;
        }
        else if (pow(ac, 2) < pow(ab, 2) + pow(bc, 2))
        {
            printf("0\n");
            return 0;
        }
    }
    else if ((fabs(p / 3 - ab) < EPS) && (fabs(p / 3 - bc) < EPS) && (fabs(p / 3 - ac) < EPS))
    {
        printf("0\n");
        return 0;
    }
    printf("Что то пошло не так! \n");
    return 1;
}
