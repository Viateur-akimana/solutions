#include <iostream>
#include <cmath>

// Function to compute the area of the circle
double calculateArea(double radius) {
    return M_PI * radius * radius; // M_PI is the mathematical constant for pi
}

// Function to compute the circumference of the circle
double calculateCircumference(double radius) {
    return 2 * M_PI * radius;
}

int main() {
    double radius;

    // Prompt the user to enter the radius of the circle
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    // Calculate area and circumference using the functions
    double area = calculateArea(radius);
    double circumference = calculateCircumference(radius);

    // Display the calculated area and circumference
    std::cout << "Area of the circle: " << area << std::endl;
    std::cout << "Circumference of the circle: " << circumference << std::endl;

    return 0;
}
