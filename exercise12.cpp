#include <iostream>

void computeQuotientAndRemainder(int dividend, int divisor, int &quotient, int &remainder) {
    quotient = dividend / divisor;
    remainder = dividend % divisor;
}

int main() {
    int dividend, divisor, quotient, remainder;
    
    // Prompt the user to enter the dividend and divisor
    std::cout << "Enter dividend: ";
    std::cin >> dividend;
    std::cout << "Enter divisor: ";
    std::cin >> divisor;
    
    // Call the function to compute quotient and remainder
    computeQuotientAndRemainder(dividend, divisor, quotient, remainder);
    
    // Display the computed quotient and remainder
    std::cout << "Quotient: " << quotient << std::endl;
    std::cout << "Remainder: " << remainder << std::endl;
    
    return 0;
}
