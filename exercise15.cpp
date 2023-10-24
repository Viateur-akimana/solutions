#include <iostream>
#include <ctime>

void displayCurrentDateTime() {
    // Get the current time using the current system time
    std::time_t currentTime = std::time(0);

    // Convert the current time to a string
    char* dateTimeString = std::ctime(&currentTime);

    // Display the current date and time
    std::cout << "Current Date and Time: " << dateTimeString;
}

int main() {
    // Call the function to display the current date and time
    displayCurrentDateTime();

    return 0;
}
