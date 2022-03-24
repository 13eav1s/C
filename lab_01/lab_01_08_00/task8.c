#include <stdio.h>
#include <stdint.h>


int rez = 0;


int bin(int n, int flag)
{
    if (flag == 0)
    {
        rez = 0;
    }
    else
    {
        rez = flag;
    }
    if (n >= 2)
    {
        bin(n / 2, rez);
    }
    rez *= 10;
    rez += n % 2;
    return rez;
}


int main(void)
{
    uint32_t a;
    int n, rez;
    scanf("%u%d", &a, &n);
    rez = (a >> n % 32 | a << (32 - n % 32));
    printf("%d\n", rez);
    rez = bin(rez, 0);
    printf("%d\n", rez);
    return 0;
}
