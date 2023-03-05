#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char **argv) {
    if (argc == 1 || argc > 2) {
        fprintf(stderr, "ERROR: you must provide exactly one string");
        return 1;
    }

    const char *word = argv[1];
    const size_t length = strlen(word);
    char *start = malloc(length);
    char *reversed = start;

    for (int i = length-1; i >= 0; i-- && reversed++)
        *reversed = word[i];
    *++reversed = '\0';

    printf("\nword: %s\nreversed: %s\n", word, start);

    return 0;
}
