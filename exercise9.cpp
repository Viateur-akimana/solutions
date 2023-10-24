#include <iostream>
#include <cmath>

bool isPythagoreanPair(int a, int b) {
    int cSquare = a * a + b * b;
    int c = sqrt(cSquare);
    return (c * c == cSquare);
}

void findPythagoreanPairs() {
    int count = 0;

    // Iterate through all pairs (a, b) where a and b are greater than 1 and less than 100
    for (int a = 2; a < 100; ++a) {
        for (int b = a; b < 100; ++b) {
            if (isPythagoreanPair(a, b)) {
                std::cout << "(" << a << ", " << b << ") ";
                ++count;
            }
        }
    }

    std::cout << "\nNumber of pairs found: " << count << std::endl;
}

int main() {
    std::cout << "Pythagorean Pairs (a, b) where a and b are greater than 1 and less than 100:\n";
    findPythagoreanPairs();

    return 0;
}
