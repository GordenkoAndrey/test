#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    char *locale = setlocale(LC_ALL, "UKR");
    system("chcp 65001");

    char in_text[256];

    printf("Введiть речення англiйською/Українською:\n");
    gets(in_text);

    int tmp = 0;
    int i = 0;
    while (1)
    {
        if (in_text[i] == ',' ||
           in_text[i] == '!' ||
           in_text[i] == '?')
           {
               break;
           }
        if (in_text[i] == ')' &&
            in_text[i + 1] == ')')
        {
            break;
        }
        if (in_text[i] == 'd' &&
            in_text[i + 1] == 'e' &&
            in_text[i + 2] == 'v' &&
            in_text[i + 3] == 'e' &&
            in_text[i + 4] == 'l' &&
            in_text[i + 5] == 'o' &&
            in_text[i + 6] == 'p' &&
            in_text[i + 7] == 'e' &&
            in_text[i + 8] == 'r')
        {
            tmp = 1;
        }
         if (in_text[i] == 'D' &&
            in_text[i + 1] == 'E' &&
            in_text[i + 2] == 'V' &&
            in_text[i + 3] == 'E' &&
            in_text[i + 4] == 'L' &&
            in_text[i + 5] == 'O' &&
            in_text[i + 6] == 'P' &&
            in_text[i + 7] == 'E' &&
            in_text[i + 8] == 'R')
        {
            tmp = 1;
        }
         if (in_text[i] == 'Д' &&
            in_text[i + 1] == 'Е' &&
            in_text[i + 2] == 'В' &&
            in_text[i + 3] == 'Е' &&
            in_text[i + 4] == 'Л' &&
            in_text[i + 5] == 'О' &&
            in_text[i + 6] == 'П' &&
            in_text[i + 7] == 'Е' &&
            in_text[i + 8] == 'Р')
        {
            tmp = 1;
        }
         if (in_text[i] == 'д' &&
            in_text[i + 1] == 'е' &&
            in_text[i + 2] == 'в' &&
            in_text[i + 3] == 'е' &&
            in_text[i + 4] == 'л' &&
            in_text[i + 5] == 'о' &&
            in_text[i + 6] == 'п' &&
            in_text[i + 7] == 'е' &&
            in_text[i + 8] == 'р')
        {
            tmp = 1;
        }
        i++;
    }
    if (tmp == 1)
    {
        printf("Є");
    }
    else
    {
        printf("немає");
    }

}
