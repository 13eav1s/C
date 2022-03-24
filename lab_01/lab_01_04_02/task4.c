/* С клавиатуры задаётся время в секундах. Перевести в часы, минуты, секунды и
 * вывести на экран.*/
#include <stdio.h>


int main(void)
{
    long long int ts;
    printf("Введите время в секундах: \n");
    scanf("%lld", &ts);
    long long int tm = 0;
    long long int th = 0;
    tm = ts / 60;
    ts -= tm * 60;
    th = tm / 60;
    tm -= th * 60;
    printf("количество часов = %lld \nколичество минут = %lld \nколичество "
           "секунд = %lld\n", th, tm, ts);
    return 0;
}
