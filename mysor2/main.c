#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    char *locale = setlocale(LC_ALL, "UKR");
    system("chcp 65001");

    char in_text[256];

    printf("����i�� ������� ����i������/����������:\n");
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
         if (in_text[i] == '�' &&
            in_text[i + 1] == '�' &&
            in_text[i + 2] == '�' &&
            in_text[i + 3] == '�' &&
            in_text[i + 4] == '�' &&
            in_text[i + 5] == '�' &&
            in_text[i + 6] == '�' &&
            in_text[i + 7] == '�' &&
            in_text[i + 8] == '�')
        {
            tmp = 1;
        }
         if (in_text[i] == '�' &&
            in_text[i + 1] == '�' &&
            in_text[i + 2] == '�' &&
            in_text[i + 3] == '�' &&
            in_text[i + 4] == '�' &&
            in_text[i + 5] == '�' &&
            in_text[i + 6] == '�' &&
            in_text[i + 7] == '�' &&
            in_text[i + 8] == '�')
        {
            tmp = 1;
        }
        i++;
    }
    if (tmp == 1)
    {
        printf("�");
    }
    else
    {
        printf("����");
    }

}
