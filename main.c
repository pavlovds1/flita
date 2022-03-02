#include "stdio.h"
int my_func(int a) {
    int i, mass[99];
    for (i = 0; i < 99; i++) {
        mass[i] = 0;
    }
    i = 0;
    while (a != 0) {
        if (a % 2 == 0) {
            mass[i] = 0;
        }
        else {
            mass[i] = 1;
        }
        a = a >> 1;
        i++;
    }
    printf("В двоичной системе: ");
    i = i - 1;
    for (; i >= 0; i--)
        printf("%d", mass[i]);
    printf("\n");
    return(0);
}
int main(int argc, char* argv[]) {
    int a = 0, j;
    printf("Введите количество чисел, которые нужно перевести: ");
    scanf("%d", &j);
    printf("Введите целые десятичные числа: \n");
    while (j > 0) {
        scanf("%d", &a);
        my_func(a); //передаем в функцию число, которое нужно перевести
        j--;
    }
}

