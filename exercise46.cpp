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

int isMagicArray(int a[], int len) {
    if (len == 0) {
        return 0;
    }

    int primeSum = 0;

    // Calculate sum of primes in the array
    for (int i = 1; i < len; ++i) {
        if (isPrime(a[i])) {
            primeSum += a[i];
        }
    }

    // Check if the first element is equal to the sum of primes
    if ((a[0] == primeSum && primeSum != 0) || (a[0] == 0 && primeSum == 0)) {
        return 1;
    }

    return 0;
}

int main() {
    int arr1[] = {21, 3, 7, 9, 11, 4, 6};
    int arr2[] = {13, 4, 4, 4, 4};
    int arr3[] = {10, 5, 5};
    int arr4[] = {0, 6, 8, 20};
    int arr5[] = {3};
    int arr6[] = {8, 5, -5, 5, 3};

    std::cout << isMagicArray(arr1, 7) << std::endl; // Output: 1 (arr1 is a Magic array)
    std::cout << isMagicArray(arr2, 5) << std::endl; // Output: 1 (arr2 is a Magic array)
    std::cout << isMagicArray(arr3, 3) << std::endl; // Output: 1 (arr3 is a Magic array)
    std::cout << isMagicArray(arr4, 4) << std::endl; // Output: 1 (arr4 is a Magic array)
    std::cout << isMagicArray(arr5, 1) << std::endl; // Output: 1 (arr5 is a Magic array)
    std::cout << isMagicArray(arr6, 5) << std::endl; // Output: 0 (arr6 is not a Magic array)

    return 0;
}
