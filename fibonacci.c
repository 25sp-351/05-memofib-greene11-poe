#include "fibonacci.h"

long_function_pointer fibonacci_provider;

long long fibonacci(int numbers) {
    if (numbers < 2) {
        return numbers;
    }
    return (*fibonacci_provider)(numbers - 1) + (*fibonacci_provider)(numbers - 2);
}