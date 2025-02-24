# HW_05_Fibonacci Tests

## Test Cases:
1.  **Basic Fibonacci Numbers:**
    * Input: `0 1 2 3 4 5`
    * Expected Output:
        ```
        fib(0) = 0
        fib(1) = 1
        fib(2) = 1
        fib(3) = 2
        fib(4) = 3
        fib(5) = 5
        ```
    * Purpose: Check basic Fibonacci calculations.

2.  **Negative Input:**
    * Input: `-1 -5`
    * Expected Output:
        ```
        fib(-1) not accepted
        fib(-5) not accepted
        ```
    * Purpose: Checks for negative input handling.

3.  **Cache Hits:**
    * Input: `10 10 5 5 20 20`
    * Expected Output:
        ```
        fib(10) = 55
        Cache hit: 10, returning memoized value
        fib(10) = 55
        fib(5) = 5
        Cache hit: 5, returning memoized value
        fib(5) = 5
        fib(20) = 6765
        Cache hit: 20, returning memoized value
        fib(20) = 6765
        ```
    * Purpose: Verify that the cache is working correctly.

4.  **Cache Miss (Above MAX_MEMOIZED):**
    * Input: `101 102`
    * Expected Output:
        ```
        Cache miss: 101 > 100
        fib(101) = ... (very large number)
        Cache miss: 102 > 100
        fib(102) = ... (very large number)
        ```
    * Purpose: Verify that numbers above `MAX_MEMOIZED` bypass the cache.

5. **Mixed cache and non cache**
    * Input: `10 101 5 102`
    * Expected Output:
        ```
        fib(10) = 55
        Cache hit: 10, returning memoized value
        fib(10) = 55
        Cache miss: 101 > 100
        fib(101) = ... (very large number)
        fib(5) = 5
        Cache miss: 102 > 100
        fib(102) = ... (very large number)
        ```
    * Purpose: Verify that cache and non cache work together.

## Running Tests
1.  **Basic Fibonacci Numbers:**
    * Input: `0 1 2 3 4 5 10 20`
    * Actual Output:
    ```
    Cache miss: 0, calculating and storing
    fib(0) = 0
    Cache miss: 1, calculating and storing
    fib(1) = 1
    Cache miss: 2, calculating and storing
    Cache hit: 1, returning memoized value
    Cache hit: 0, returning memoized value
    fib(2) = 1
    Cache miss: 3, calculating and storing
    Cache hit: 2, returning memoized value
    Cache hit: 1, returning memoized value
    fib(3) = 2
    Cache miss: 4, calculating and storing
    Cache hit: 3, returning memoized value
    Cache hit: 2, returning memoized value
    fib(4) = 3
    Cache miss: 5, calculating and storing
    Cache hit: 4, returning memoized value
    Cache hit: 3, returning memoized value
    fib(5) = 5
    Cache miss: 10, calculating and storing
    Cache miss: 9, calculating and storing
    Cache miss: 8, calculating and storing
    Cache miss: 7, calculating and storing
    Cache miss: 6, calculating and storing
    Cache hit: 5, returning memoized value
    Cache hit: 4, returning memoized value
    Cache hit: 5, returning memoized value
    Cache hit: 6, returning memoized value
    Cache hit: 7, returning memoized value
    Cache hit: 8, returning memoized value
    fib(10) = 55
    Cache miss: 20, calculating and storing
    Cache miss: 19, calculating and storing
    Cache miss: 18, calculating and storing
    Cache miss: 17, calculating and storing
    Cache miss: 16, calculating and storing
    Cache miss: 15, calculating and storing
    Cache miss: 14, calculating and storing
    Cache miss: 13, calculating and storing
    Cache miss: 12, calculating and storing
    Cache miss: 11, calculating and storing
    Cache hit: 10, returning memoized value
    Cache hit: 9, returning memoized value
    Cache hit: 10, returning memoized value
    Cache hit: 11, returning memoized value
    Cache hit: 12, returning memoized value
    Cache hit: 13, returning memoized value
    Cache hit: 14, returning memoized value
    Cache hit: 15, returning memoized value
    Cache hit: 16, returning memoized value
    Cache hit: 17, returning memoized value
    Cache hit: 18, returning memoized value
    fib(20) = 6765
    ```
    Note: I neglected including all of these since it would take up too much room, but wanted to leave at least one set as an example of successful cache usage.