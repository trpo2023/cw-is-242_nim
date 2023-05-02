#include <stdio.h>
#include "functions.h"

void display_matches(int a, int b, int c) {
	printf("Кучки спичек: A = %d, B = %d, C = %d\n", a, b, c);
}

void update_heap(char heap, int num, int *a, int *b, int *c, int player) {
	switch (heap) {
		case 'A':
		case 'a':
			if (num <= *a) {
				*a -= num;
			} else {
				printf("Ошибка: в кучке A не хватает спичек.\n");
				return;
			}
			break;
		case 'B':
		case 'b':
			if (num <= *b) {
				*b -= num;
			} else {
				printf("Ошибка: в кучке B не хватает спичек.\n");
				return;
			}
			break;
		case 'C':
		case 'c':
			if (num <= *c) {
				*c -= num;
			} else {
				printf("Ошибка: в кучке C не хватает спичек.\n");
				return;
			}
			break;
		default:
			printf("Ошибка: некорректная команда.\n");
			return;
	}

	printf("Ход игрока %d: %c %d\n", player, heap, num);
}

int check_end_game(int a, int b, int c) {
	if (a == 0 && b == 0 && c == 0) {
		return 1;
	} else {
		return 0;
	}
}
