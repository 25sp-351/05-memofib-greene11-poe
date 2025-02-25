#include "memoize.h"
#include "fibonacci.h"
#include <stdio.h>

#define MAX_MEMOIZED 100
#define ARRAY_SIZE (MAX_MEMOIZED + 1)
#define NO_VALUE_YET -1

long_function_pointer original_provider;
long long memoization_data[ARRAY_SIZE];

long long cache_function(int numbers) {
    if (numbers > MAX_MEMOIZED) {
        printf("Cache miss: %d > %d\n", numbers, MAX_MEMOIZED);
        return (*original_provider)(numbers);
    }

    if (memoization_data[numbers] == NO_VALUE_YET) {
        printf("Cache miss: %d, calculating and storing\n", numbers); 
        memoization_data[numbers] = (*original_provider)(numbers);
    } else {
        printf("Cache hit: %d, returning memoized value\n", numbers);
    }

    return memoization_data[numbers];
}

long_function_pointer init_cache(long_function_pointer real_provider) {
    for (int i = 0; i < ARRAY_SIZE; i++) {
        memoization_data[i] = NO_VALUE_YET;
    }
    original_provider = real_provider;
    return cache_function;
}