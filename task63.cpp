#include <iostream>

template<typename T>
struct vector {
    T* data;
    int size;
    int capacity;
};

long long fib_memo(int n, vector<long long>& cache) {
    if (n <= 1) return n;
    if (cache.data[n] != -1) return cache.data[n];
    
    cache.data[n] = fib_memo(n - 1, cache) + fib_memo(n - 2, cache);
    return cache.data[n];
}

int main() {
    int n = 50;
    long long* arr = new long long[n + 1];
    for(int i=0; i<=n; i++) arr[i] = -1;
    
    vector<long long> cache = {arr, n + 1, n + 1};
    std::cout << "Fib(50): " << fib_memo(n, cache) << std::endl;
    
    delete[] arr;
    return 0;
}
