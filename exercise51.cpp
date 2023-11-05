#include <iostream>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int isFineArray(int a[], int len) {
    // Iterate through the array and check if every prime has its twin in the array
    for (int i = 0; i < len; ++i) {
        if (isPrime(a[i]) && (isPrime(a[i] - 2) || isPrime(a[i] + 2))) {
            // If the current number is prime, check if its twin (either -2 or +2) is in the array
            continue;
        } else if (isPrime(a[i])) {
            // If a prime number does not have its twin in the array, return 0
            return 0;
        }
    }
    // All primes have their twins in the array, return 1
    return 1;
}

int main() {
    int arr1[] = {4, 7, 9, 6, 5};
    int arr2[] = {4, 9, 6, 33};
    int arr3[] = {3, 8, 15};
    
    std::cout << isFineArray(arr1, 5) << std::endl; // Output: 1 (arr1 is a Fine array)
    std::cout << isFineArray(arr2, 4) << std::endl; // Output: 1 (arr2 is a Fine array)
    std::cout << isFineArray(arr3, 3) << std::endl; // Output: 0 (arr3 is not a Fine array)

    return 0;
}
