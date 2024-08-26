#include <stdio.h>

int main(void) {
     int sum = 0, num;
     scanf("%d\n", &num);
     while (num != 0) {
          sum += num;
          scanf("%d\n", &num);
     }
     printf("General answer %d\n", sum);
}
