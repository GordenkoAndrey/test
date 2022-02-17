#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <wchar.h>
#include <ctype.h>
#include <fcntl.h>
#include <io.h>

void anot()
{
    wprintf(L"------------------------------------------------------------------------------------------------------------------\n");
    wprintf(L"|Цей застосунок створений для визначення, чи є в реченні слово девелопер на будь-якій мові                        |\n");
    wprintf(L"|                                                                                Горденко А.В.                    |\n");
    wprintf(L"|                                                                                andgorden777@gmail.com           |\n");
    wprintf(L"|Центральноукраїнський національний технічний університет                                                         |\n");
    wprintf(L"|                                                                                2022                             |");
    wprintf(L"\n------------------------------------------------------------------------------------------------------------------\n");
}



int main()
{
    _setmode(_fileno(stdout),_O_U16TEXT);
    _setmode(_fileno(stdin),_O_U16TEXT);
    system("chcp 65001");

       anot();

    wchar_t in_text[200];
    wchar_t ukr[10] = L"девелопер";
    wchar_t UKR[10] = L"ДЕВЕЛОПЕР";
    wchar_t eng[10] = L"developer";
    wchar_t ENG[10] = L"DEVELOPER";
    int tmp = 0;
    int prov = 0;

    wprintf(L"Введiть речення англiйською/Українською:\n");
    fgetws(in_text, 200, stdin);


    for (int i = 0; i < 200; i++)
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

        for (int j = 0; j < 9; j++)
        {
            if (in_text[i + j] == ukr[j] ||
                in_text[i + j] == UKR[j] ||
                in_text[i + j] == eng[j] ||
                in_text[i + j] == ENG[j])
            {
                prov += 1;
                if(prov == 9)
                {
                    tmp = 1;
                    break;
                }
            }
            else
            {
                prov = 0;
            }
        }
        if (tmp == 1)
        {
            break;
        }
    }

    if (tmp == 1)
        {
            wprintf(L"В реченні є слова\"девелопер/developer\"\n");
        }
    else
        {
            wprintf(L"В реченні немає слова\"девелопер/developer\"\n");
        }
}
