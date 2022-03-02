/*#include <stdio.h>

int main(void) {
    int array[10],a,b = 0,number,i,mass[10];
    while((a = getchar()) != '\n') {
        if (a != ' ') {
            array[b] = a;
            b++;
        }
    }
    for (i = 0; array[i] != EOF; i++) {
        number = array[i];
        int j = 0;
        while (number != 0) {
            if (number % 2 == 0) {
                mass[i] = 0;
                number = number / 2;
            }
            else {
                mass[i] = 1;
                number = number / 2;
            }
            j++;
        }
        while (j >= 0) {
            printf("%d", mass[j]);
            j--;
            
        }
    }
}
*/
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
    int a = 0, array[99],b = 0,j;
    printf("Введите количество чисел, которые нужно перевести: ");
    scanf("%d", &j);
    printf("Введите целые десятичные числа: ");
    while (j > 0) {
        scanf("%d", &a);
        my_func(a); //передаем в функцию число, которое нужно перевести
        j--;
    }
}

