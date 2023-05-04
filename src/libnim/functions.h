#ifndef FUNCTIONS_H
#define FUNCTIONS_H

// Отображение текущего состояния кучек спичек
int display_heaps(int a, int b, int c);

// Проверка условия окончания игры
int is_game_over(int a, int b, int c);

// Обновление выбранной кучки
int update_heap(int *a, int *b, int *c, char heap, int num);

#endif
