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


char* my_strrchr (char *s, char c)
{
    int flag = 0;
    char *s1;
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


int compare_strpbrk(void)
{
    int fail = 0;
    char s[N][N] = {"123456789", "1234211", "321321", "987654321"};
    char charset[N][N] = {"123", "123", "321", "3"};
    for (int i = 0; i < 3; i++)
    {
        if (strpbrk(s[i], charset[i]) != my_strpbrk(s[i], charset[i]))
        {
            fail += 1;
        }
    }
    return fail;
}


int compare_strspn(void)
{
    int fail = 0;
    char s[N][N] = {"123456789", "1234211", "321321", "987654321"};
    char charset[N][N] = {"123", "123", "321", "3"};
    for (int i = 0; i < 3; i++)
    {
        if (strspn(s[i], charset[i]) != my_strspn(s[i], charset[i]))
        {
            fail += 1;
        }
    }
    return fail;
}


int compare_strcspn(void)
{
    int fail = 0;
    char s[N][N] = {"123456789", "1234211", "321321", "987654321", ""};
    char charset[N][N] = {"123", "123", "321", "3", ""};
    for (int i = 0; i < 4; i++)
    {
        if (strcspn(s[i], charset[i]) != my_strcspn(s[i], charset[i]))
        {
            fail += 1;
        }
    }
    return fail;
}


int compare_strchr(void)
{
    int fail = 0;
    char s[N][N] = {"123456789", "1234211", "321321", "987654321", ""};
    char charset[N] = {'1', '2', '1', '5', '3'};
    for (int i = 0; i < 4; i++)
    {
        if (strchr(s[i], charset[i]) != my_strchr(s[i], charset[i]))
        {
            fail += 1;
        }
    }
    return fail;
}


int compare_strrchr(void)
{
    int fail = 0;
    char s[N][N] = {"123456789", "1234211", "321321", "987654321", ""};
    char charset[N] = {'1', '2', '1', '5', '3'};
    for (int i = 0; i < 4; i++)
    {
        if (strrchr(s[i], charset[i]) != my_strrchr(s[i], charset[i]))
        {
            fail += 1;
        }
    }
    return fail;
}


int main()
{
    int compare[5];
    compare[0] = compare_strpbrk();
    compare[1] = compare_strspn();
    compare[2] = compare_strcspn();
    compare[3] = compare_strchr();
    compare[4] = compare_strrchr();
    printf("Количество проваленых тестов в strpbrk = %d\n", compare[0]);
    printf("Количество проваленых тестов в strspn = %d\n", compare[1]);
    printf("Количество проваленых тестов в strcspn = %d\n", compare[2]);
    printf("Количество проваленых тестов в strchr = %d\n", compare[3]);
    printf("Количество проваленых тестов в strrchr = %d\n", compare[4]);
    return 0;
}
