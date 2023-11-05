#include <iostream>

bool isPrime(int m) {
    if (m <= 1) {
        return false;
    }
    for (int i = 2; i * i <= m; ++i) {
        if (m % i == 0) {
            return false;
        }
    }
    return true;
}

int isPrimeProduct(int n) {
    if (n <= 1) {
        return 0;
    }

    for (int i = 2; i <= n / 2; ++i) {
        if (isPrime(i) && isPrime(n / i) && i * (n / i) == n) {
            return 1;
        }
    }
    return 0;
}

int main() {
    std::cout << isPrimeProduct(22) << std::endl; // Output: 1 (22 is a prime product)
    std::cout << isPrimeProduct(10) << std::endl; // Output: 0 (10 is not a prime product)
    std::cout << isPrimeProduct(13) << std::endl; // Output: 0 (13 is a prime, but not a product of two primes)
    std::cout << isPrimeProduct(2) << std::endl;  // Output: 0 (2 is a prime, but not a product of two primes)

    return 0;
}
