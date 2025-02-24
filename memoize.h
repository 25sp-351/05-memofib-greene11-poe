#ifndef MEMOIZE_H
#define MEMOIZE_H

typedef long long (*long_function_pointer)(int);

long_function_pointer init_cache(long_function_pointer real_provider);

#endif