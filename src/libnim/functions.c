#include <stdio.h>
#include <ctype.h>
#include "libnim/functions.h"

int display_heaps(int a, int b, int c)
{
    printf("A: ");
    for (int i = 0; i < a; i++){
        printf("|");
    }
    printf("\nB: ");
    for (int i = 0; i < b; i++){
        printf("|");
    }
    printf("\nC: ");
    for (int i = 0; i < c; i++){
        printf("|");
    }
    printf("\n");
    return 0;
}

int is_game_over(int a, int b, int c)
{
    if (a == 0 && b == 0 && c == 0){
        return 1;
    }
    return 0;
}

int update_heap(int *a, int *b, int *c, char heap, int num)
{
    if (heap == 'A'){
        if (num <= 0 || num > *a){
            return 0;
        }
        *a -= num;
        }
        else if (heap == 'B'){
            if (num <= 0 || num > *b){
                return 0;
            }
        *b -= num;
        }
        else if (heap == 'C'){
            if (num <= 0 || num > *c){
                return 0;
            }
        *c -= num;
        }
        else{
            return 0;
        }
        return 1;
}
