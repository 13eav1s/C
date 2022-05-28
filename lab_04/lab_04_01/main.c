#include <stdio.h>
#include <string.h>
#define N 10


const char* my_strpbrk(const char* s, const char* charset)
{
    size_t s1len = strlen(s);
    size_t s2len = strlen(charset);
    for (int i = 0; i < s1len; i++)
        for (int j = 0; j < s2len; j++)
            if (s[i] == charset[j])
                return &s[i];
    return NULL;
}


size_t my_strspn(const char *str, const char * sym)
{
    size_t size_str = strlen(str);
    size_t size_sym = strlen(sym);
    size_t k = 0;
    size_t flag;
    for (size_t i = 0; i < size_str; i++)
    {
        flag = 0;
        for (size_t j = 0; j < size_sym; j++)
        {
            if (str[i] == sym[j])
            {
                k++;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
    return k;
}


size_t my_strcspn(const char *str, const char * sym)
{
    size_t size_str = strlen(str);
    size_t size_sym = strlen(sym);
    size_t k = 0;
    size_t flag;
    for (size_t i = 0; i < size_str; i++)
    {
        flag = 0;
        for (size_t j = 0; j < size_sym; j++)
        {
            if (str[i] != sym[j])
            {
                flag++;
            }
        }
        if (flag != size_sym)
        {
            break;
        }
        else
        {
            k++;
        }
    }
    return k;
}


const char* my_strchr(const char* s, char c)
{
    while (*s)
    {
        if (*s == c)
            return s;
        else
            s++;
    }
    return NULL;
}


char* my_strrchr (const char *s, char c)
{
    int flag = 0;
    const char *s1;
    while (*s)
    {
        if (*s == c)
        {
            s1 = s;
            flag = 1;
        }
        s++;
    }
    if (flag == 0)
    {
        return NULL;
    }
    else
    {
        return s1;
    }
}


int main() {
    // Запуск my strpbrk
//    char str[] = "Police Academy";
//    char key[] = "Aaeiou";
//    // первый поиск
//    char * pch = my_strpbrk (str, key);
//    printf("\n");
//    // пока есть гласные буквы в строке
//    while (pch != NULL)
//    {
//        // печать гласного символа
//        printf("%c ", *pch);
//        // поиск гласных букв
//        pch = my_strpbrk (pch+1,key);
//    }
//
//    // Запуск my_strspn и my_strcspn
//    //  Набор со строкой для поиска
//    char str[N] = "0109001892";
//    //  Набор символов, которые должны входить в искомый сегмент
//    char sym[N] = "243";
//
//    // Определяем длину максимального сегмента, содержащего символы из sym
//    printf("Длина максимального сегмента: %lu\n", my_strcspn(str, sym));

    // Массив со строкой для поиска
    char str [11] = "0163456786";
    // Код искомого символа
    char ch = '6';
    // Указатель на искомую переменную в строке,
    // по которой осуществляется поиск.
    char *ach;

    // Ищем символ ‘6’
    ach = my_strrchr(str,ch);

    // Выводим результат на консоль
    if (ach==NULL)
        printf ("Символ в строке не найден\n");
    else
        printf ("Искомый символ в строке на позиции # %d\n", (int)(ach - str));

    return 0;
}
