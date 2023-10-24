#include <iostream>

// Function to compute the volume of a cube
double calculateCubeVolume(double sideLength) {
    return sideLength * sideLength * sideLength;
}

int main() {
    double sideLength;

    // Prompt the user to enter the side length of the cube
    std::cout << "Enter the side length of the cube: ";
    std::cin >> sideLength;

    // Check if the input is non-negative
    if (sideLength >= 0) {
        // Calculate the volume using the function
        double volume = calculateCubeVolume(sideLength);

        // Display the calculated volume
        std::cout << "Volume of the cube: " << volume << std::endl;
    } else {
        // Display an error message if the input is negative
        std::cout << "Error: Side length of a cube cannot be negative." << std::endl;
    }

    return 0;
}
