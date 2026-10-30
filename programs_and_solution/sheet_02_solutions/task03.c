#include <stdio.h>

int count_char_occurrences(const char *str, char target) {
    int count = 0;
    while (*str != '\0') {
        if (*str == target) {
            count++;
        }
        str++;
    }
    return count;
}

int main(void) {
    const char *data = "packet_header_analysis_routine";
    char search_target = 'a';

    int occurrences = count_char_occurrences(data, search_target);
    printf("Occurrences of '%c' in \"%s\": %d\n", search_target, data, occurrences);

    return 0;
}
