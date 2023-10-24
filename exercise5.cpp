#include <iostream>
#include <cmath>

int main() {
    double radius, volume;

    // Prompt the user to enter the radius of the sphere
    std::cout << "Enter the radius of the sphere: ";
    std::cin >> radius;

    // Calculate the volume of the sphere using the formula: V = (4/3) * pi * radius^3
    volume = (4.0 / 3.0) * M_PI * pow(radius, 3);

    // Display the calculated volume
    std::cout << "The volume of the sphere is: " << volume << std::endl;

    return 0;
}
