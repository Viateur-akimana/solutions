#include <iostream>
#include <cmath>

void findRoots(int a, int b, int c) {
    double discriminant = b * b - 4 * a * c;
    
    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        std::cout << "Root 1: " << root1 << std::endl;
        std::cout << "Root 2: " << root2 << std::endl;
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        std::cout << "Root 1 and Root 2: " << root << std::endl;
    } else {
        std::cout << "No real roots exist." << std::endl;
    }
}

int main() {
    int a, b, c;
    std::cout << "Enter coefficients a, b, and c for the quadratic equation (ax^2 + bx + c = 0): ";
    std::cin >> a >> b >> c;

    findRoots(a, b, c);
    return 0;
}
