#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void anot()
{
    puts("------------------------------------------------------------------------------------------------------------------------");
    puts("|Цей застосунок створений для виведення кількості елементів попарно єлементів                                           |");
    puts("|                                                                                                Горденко А.В           |");
    puts("|                                                                                                andgorden777@gmail.com |");
    puts("| Центральноукраїнський національний технічний університет                                                              |");
    puts("|                                                                                                 2022                  |");
    puts("------------------------------------------------------------------------------------------------------------------------");

}

int main()
{

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    anot();

    const size = 50;
    int input[size];
    int first = 0;
    int last = size - 1;

    printf("Введіть 50 чисел: \n");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &input[i]);
    }

    for (int i = 0; i < size; i++)
    {
        printf("| %d", input[i]);
    }

    printf("\n=========================\n");

    for (int i = 0; i < size / 2; i++)
    {
        printf("| %d", input[first]);
        printf(", %d", input[last]);

        first++;
        last--;
    }
}
