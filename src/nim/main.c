#include <stdio.h>
#include <ctype.h>
#include "libnim/functions.h"

int main()
{
        int a, b, c;
        int player = 1; // Игрок 1 начинает игру
        a = 3;
        b = 4;
        c = 5; // Инициализация кучек спичек

        while (1)
        {                               // Бесконечный цикл, пока не будет достигнуто условие окончания игры
                display_heaps(a, b, c); // Отображение текущего состояния кучек спичек

                // Проверка условия окончания игры
                if (is_game_over(a, b, c))
                {
                        printf("Игрок %d победил!\n", player);
                        break;
                }

                // Ввод и проверка корректности ввода
                char heap;
                int num;
                printf("Игрок %d, выберите кучку и количество спичек для удаления (например, A 2): ", player);
                if (scanf(" %c %d", &heap, &num) != 2 || !isalpha(heap))
                {
                        printf("Ошибка: некорректная команда.\n");
                        getchar(); // Считывание символа новой строки
                        continue;
                }
                getchar(); // Считывание символа новой строки
                // Обновление выбранной кучки
                if (!update_heap(&a, &b, &c, heap, num))
                {
                        printf("Ошибка: некорректная команда.\n");
                        continue;
                }

                // Смена хода
                player = (player == 1) ? 2 : 1;
        }

        return 0;
}
