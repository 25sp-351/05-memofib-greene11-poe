#ifndef FIBONACCI_H
#define FIBONACCI_H

typedef long long (*long_function_pointer)(int parameter);

extern long_function_pointer fibonacci_provider;

long long fibonacci(int numbers);

#endif