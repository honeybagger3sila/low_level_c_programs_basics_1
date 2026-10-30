#include <stdio.h>

void reverse_string(char *str) {
    char *start = str;
    char *end = str;

    while (*end != '\0') {
        end++;
    }
    end--;

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main(void) {
    char buffer[] = "NetworkBuffer";

    printf("Original: %s\n", buffer);
    reverse_string(buffer);
    printf("Reversed: %s\n", buffer);

    return 0;
}
