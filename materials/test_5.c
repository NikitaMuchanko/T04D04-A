#include <stdio.h>

int main() {
     int i = 1;
     printf("Цикл do while для вывода чисел от 1 до 5:\n");
     do {
          printf("%d\n", i);
          i++;
     } while (i <= 5);
     return 0;
}