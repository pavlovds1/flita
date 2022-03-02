#include <stdio.h>
#include <string.h>
int main() {
    int a = 0, i = 0, j = 0, array[99],len,count, del, s[99],m = 0;
    printf("-------------------------------\n");
    printf("*       1.Ввести значения     *\n");
    printf("*       2.Вывести значения    *\n");
    printf("*       3.Добавить значение   *\n");
    printf("*       4.Удалить значения    *\n");
    printf("-------------------------------\n");
    while (a == 0) {
        scanf("%d", &a);
        if (a == 1) {
            printf("Введите сколько чисел хотите ввести:");
            scanf("%d", &j);
            len = j;
            printf("Введите числа:");
            while (j > 0) {
                scanf("%d", &a);
                array[i] = a;
                i++;
                j--;
            }
            a = 0;
        }
        if (a == 2) {
            printf("Числа:");
            for (i = 0; i != len; i++) {
                printf("%d\n",array[i]);
            }
            a = 0;
        }
        if (a == 3) {
            printf("Введите сколько чисел хотите добавить:");
            scanf("%d",&count);
            printf("Введите числа");
            while (count > 0) {
                scanf("%d", &a);
                array[len] = a;
                count--;
                len++;
            }
            a = 0;
        }
        if (a == 4) {
            printf("Введите число, которое хотите удалить:");
            scanf("%d", &del);
            for (int k = 0; k != len; k++) {
                if (array[k] != del) {
                    s[m] = array[k];
                    m++;
                }
            }
            len--;
            for (int h = 0; h != len; h++ ) {
                array[h] = s[h];
            }
            a = 0;
        }
    }
}
