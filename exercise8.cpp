#include <iostream>
#include <cmath>

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(number); ++i) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    long long product = 1;

    for (int i = 2; i <= 100; ++i) {
        if (isPrime(i)) {
            product *= i;
        }
    }

    std::cout << "Product of prime numbers between 1 and 100: " << product << std::endl;

    return 0;
}
