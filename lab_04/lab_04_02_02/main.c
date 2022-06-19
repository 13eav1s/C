#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define N 128
#define SUCCESS 0
#define BOOL_SUCCESS 1
#define BOOL_ERROR 0
#define INPUT_ERROR 2


int del_loop(char str[N][N], int col)
{
    //  Слово вхождения которого надо удалить
    char word[N] = "";
    for (int i = 0; i < col; i++)
    {
        //  Запись слова
        strcpy(word, str[i]);
        //  Что бы небыло выхода за предел массива
        if (i < col - 1)
        {
            //  Начиная со следующего слова удаляются все вхождения
            for (int j = i + 1; j < col; j++)
            {
                if (strcmp(str[j], word) == 0)
                {
                    for (int k = j; k < col - 1; k++)
                    {
                        strcpy(str[k], str[k + 1]);
                    }
                    col--;
                    j--;
                }
            }
        }
    }
    return col;
}


//  Проверка на слово во втором массиве слов
bool check_word(char *word, char words[N][N], int size)
{
    for (int i = 0; i <= size; i++)
    {
        if (strcmp(word, words[i]) == 0)
        {
            return BOOL_SUCCESS;
        }
    }
    return BOOL_ERROR;
}


//  чтение строки введенной пользователем
size_t read_line(char *s, size_t n)
{
    int ch;
    size_t i = 0;
    while ((ch = getchar()) != '\n' && ch != EOF)
        if (i < n - 1)
            s[i++] = ch;
    s[i] = '\0';
    return i;
}


//  Перевод строки в массив слов
int str_to_arr(const char *str, char arr[N][N])
{
    while (*str == ' ')
    {
        str++;
    }
    int i = 0;
    int j = 0;
    while (*str)
    {
        if (*str != ' ' && *str != '\0' && *str != ';' && *str != '.' && *str != ',' && *str != ':' && *str != '?' && *str != '!')
        {
            arr[i][j] = *str;
            j++;
            str++;
        }
        else
        {
            if (j != 0)
            {
                i++;
            }
            j = 0;
            str++;
        }
    }
    if (j == 0 && i == 0)
    {
        return -1;
    }
    return i;
}


int main(void)
{
    char str1[N], str2[N], words1[N][N], words2[N][N];
    //  Чтение первой строки введенной пользователем
    read_line(str1, N);
    //  Чтение второй строки введенной пользователем
    read_line(str2, N);
    //  Разиение первой строки на массив слов
    int col_str1 = str_to_arr(str1, words1);
    //  Разбиение второй строки на массив слов
    int col_str2 = str_to_arr(str2, words2);
    //  Проверка на пустую или пробельную строку
    if (col_str1 == -1 || col_str2 == -1)
    {
        return INPUT_ERROR;
    }
    //  Удаление повторяющихся букв
    col_str1 = del_loop(words1, col_str1 + 1);
    //  Удаление повторяющихся слов
    col_str2 = del_loop(words2, col_str2 + 1);
    printf("Result: ");
    for (int i = 0; i < col_str1; i++)
    {
        //  Поиск слова во второй строке
        if (strcmp(words1[i], "") != 0)
        {
            if (check_word(words1[i], words2, col_str2))
            {
                printf("\n%s yes", words1[i]);
            }
            else
            {
                printf("\n%s no", words1[i]);
            }
        }
    }
    return SUCCESS;
}
