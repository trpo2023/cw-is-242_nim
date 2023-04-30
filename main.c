#include <stdio.h>

int main() {
    int a, b, c;
    int player = 1; // Игрок 1 начинает игру

    a = 3;
    b = 4;
    c = 5; // Инициализация кучек спичек

    while (1) { // Бесконечный цикл, пока не будет достигнуто условие окончания игры
        printf("Кучки спичек: A = %d, B = %d, C = %d\n", a, b, c); // Отображение текущего состояния кучек спичек

        // Проверка условия окончания игры
        if (a == 0 && b == 0 && c == 0) {
            printf("Игрок %d победил!\n", player);
            break;
        }

        // Ввод и проверка корректности ввода
        char heap;
        int num;
        printf("Игрок %d, выберите кучку и количество спичек для удаления (например, A 2): ", player);
        scanf("%c %d", & heap, & num);
        getchar(); // Считывание символа новой строки

	// Обновление выбранной кучки
        switch (heap) {
        case 'A':
        case 'a':
            if (num <= a) {
                a -= num;
            } else {
                printf("Ошибка: в кучке A не хватает спичек.\n");
                continue;
            }
	   break;
        case 'B':
        case 'b':
            if (num <= b) {
                b -= num;
            } else {
                printf("Ошибка: в кучке B не хватает спичек.\n");
                continue;
            }
            break;
	case 'C':
        case 'c':
            if (num <= c) {
                c -= num;
            } else {
                printf("Ошибка: в кучке C не хватает спичек.\n");
                continue;
            }
            break;
	default:
            printf("Ошибка: некорректная команда.\n");
            continue;
        }
