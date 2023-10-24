#include <iostream>

double convertCelsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    double celsius;
    
    std::cout << "Enter temperature in Celsius: ";
    std::cin >> celsius;
    
    double fahrenheit = convertCelsiusToFahrenheit(celsius);
    
    std::cout << "Temperature in Fahrenheit: " << fahrenheit << "°F" << std::endl;
    
    return 0;
}
