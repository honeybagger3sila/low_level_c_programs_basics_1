#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int count = 5;
    int *data = (int *)malloc(count * sizeof(int));

    if (data == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < count; i++) {
        data[i] = (i + 1) * 10;
    }

    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += data[i];
    }

    double average = (double)sum / count;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    free(data);
    data = NULL;

    return 0;
}
