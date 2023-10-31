#include <iostream>

int main() {
    int N = 10; // Change N to the desired natural number limit

    int sum = (N * (N + 1)) / 2; // Sum of first N natural numbers
    int sumOfSquares = (N * (N + 1) * (2 * N + 1)) / 6; // Sum of squares of first N natural numbers
    int squareOfSum = sum * sum; // Square of the sum

    int difference = squareOfSum - sumOfSquares;

    std::cout << "Difference between the square of the sum and the sum of squares of the first "
              << N << " natural numbers is: " << difference << std::endl;

    return 0;
}
