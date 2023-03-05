#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int is_palindrome(const char* string);

int main(int argc, const char **argv)
{
    if (argc == 1 || argc > 2) {
        fprintf(stderr, "ERROR: you must provide exactly one string");
        return 1;
    }

    if (is_palindrome(argv[1]))
        printf("true\n");
    else
        printf("false\n");

    return 0;
}

int is_palindrome (const char *string)
{
    size_t length = strlen(string);

    for (size_t i = 0; i < length; i++) {
        if (i == (length - 1) - i || i > (length - 1) - i)
            break;

        if (string[i] != string[(length-1) - i])
            return 0;
    }

    return 1;
}
