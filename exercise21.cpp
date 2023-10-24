#include <iostream>

int main() {
    const int secondsInYear = 31536000; // Number of seconds in a standard year
    long long totalSeconds = 1000000000; // John's age in seconds

    // Calculate John's age in years
    double ageInYears = static_cast<double>(totalSeconds) / secondsInYear;

    // Display John's age in years
    std::cout << "John is approximately " << ageInYears << " years old." << std::endl;

    return 0;
}
