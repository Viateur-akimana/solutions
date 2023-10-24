#include <iostream>
#include <string>

void printReverseNames() {
    std::string firstName, lastName;

    // Prompt the user to enter first and last names
    std::cout << "Enter your first name: ";
    std::cin >> firstName;
    std::cout << "Enter your last name: ";
    std::cin >> lastName;

    // Print the names in reverse order with a space between them
    std::cout << "Reversed Names: " << lastName << " " << firstName << std::endl;
}

int main() {
    // Call the function to accept names and print them in reverse order
    printReverseNames();

    return 0;
}
