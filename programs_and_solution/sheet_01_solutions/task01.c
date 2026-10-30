#include <stdio.h>

void swap_values(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    int x = 15;
    int y = 42;

    printf("Before swap: x = %d, y = %d\n", x, y);
    swap_values(&x, &y);
    printf("After swap:  x = %d, y = %d\n", x, y);

    return 0;
}
