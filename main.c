#include <stdio.h>
#include <stdlib.h>
#include "fibonacci.h"
#include "memoize.h"

#define CHAR_INPUT_LIMIT 100

int main() {
    fibonacci_provider = init_cache(fibonacci);

    printf("Enter integers separated by space: ");
    char input[CHAR_INPUT_LIMIT];

    if (!fgets(input, sizeof(input), stdin)) {
        printf("Error input\n");
        return 0;
    }

    char *pointer = input;
    int number;
    
    while (sscanf(pointer, "%d", &number) == 1) {
        if (number < 0) {
            printf("fib(%d) not accepted\n", number);
        } else {
            printf("fib(%d) = %lld\n", number, (*fibonacci_provider)(number));
        }
        for (; *pointer != ' ' && *pointer != '\0'; ++pointer);
        for (; *pointer == ' '; ++pointer);
    }

    return 0;
}