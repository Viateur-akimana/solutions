#include <iostream>

int main() {
    double width, length;

    // Prompt the user to enter width and length
    std::cout << "Enter width of the rectangle: ";
    std::cin >> width;
    std::cout << "Enter length of the rectangle: ";
    std::cin >> length;

    // Calculate area and perimeter
    double area = width * length;
    double perimeter = 2 * (width + length);

    // Display the calculated area and perimeter
    std::cout << "Area of the rectangle: " << area << std::endl;
    std::cout << "Perimeter of the rectangle: " << perimeter << std::endl;

    return 0;
}
