#include <iostream>

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i*i <= number; ++i) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int findNthPrime(int n) {
    int count = 0;
    int number = 2; // Start checking from 2, the first prime number
    
    while (true) {
        if (isPrime(number)) {
            ++count;
            if (count == n) {
                return number;
            }
        }
        ++number;
    }
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    int nthPrime = findNthPrime(n);
    std::cout << "The " << n << "th prime number is: " << nthPrime << std::endl;

    return 0;
}
