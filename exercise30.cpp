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

int findNthPrime(int n) {
    int count = 0;
    int num = 2;
    while (true) {
        if (isPrime(num)) {
            ++count;
            if (count == n) {
                return num;
            }
        }
        ++num;
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
