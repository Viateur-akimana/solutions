#include <iostream>

int calculateStringLength(const char* str) {
    // Initialize a counter to keep track of the length
    int length = 0;

    // Iterate through the string using a while loop until the null terminator is encountered
    while (str[length] != '\0') {
        // Increment the length for each character in the string
        length++;
    }

    return length;
}

int main() {
    const char* inputString = "Hello, World!"; // Example input string

    // Call the function to calculate the length of the input string
    int length = calculateStringLength(inputString);

    // Display the calculated length of the string
    std::cout << "Length of the string: " << length << std::endl;

    return 0;
}
