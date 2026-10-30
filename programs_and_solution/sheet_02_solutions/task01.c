#include <stdio.h>

size_t get_string_length(const char *str) {
    const char *ptr = str;
    while (*ptr != '\0') {
        ptr++;
    }
    return (size_t)(ptr - str);
}

int main(void) {
    const char *text = "LowLevelProgramming";
    size_t length = get_string_length(text);

    printf("Text: %s\n", text);
    printf("Length: %zu characters\n", length);

    return 0;
}
