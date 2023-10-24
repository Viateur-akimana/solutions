    #include <iostream>

// Function to read three integers and print them in ascending order
void printAscendingOrder() {
    int num1, num2, num3;

    // Prompt the user to enter three integers
    std::cout << "Enter the first integer: ";
    std::cin >> num1;
    std::cout << "Enter the second integer: ";
    std::cin >> num2;
    std::cout << "Enter the third integer: ";
    std::cin >> num3;

    // Sort the integers in ascending order
    if (num1 > num2) {
        std::swap(num1, num2);
    }
    if (num2 > num3) {
        std::swap(num2, num3);
    }
    if (num1 > num2) {
        std::swap(num1, num2);
    }

    // Print the integers in ascending order
    std::cout << "Integers in ascending order: " << num1 << " " << num2 << " " << num3 << std::endl;
}

int main() {
    // Call the function to read and print integers in ascending order
    printAscendingOrder();

    return 0;
}
