#include <iostream>
#include <string>

std::string convertToRaindropSound(int number) {
    std::string result = "";
    if (number % 3 == 0) {
        result += "Pling";
    }
    if (number % 5 == 0) {
        result += "Plang";
    }
    if (number % 7 == 0) {
        result += "Plong";
    }
    if (result.empty()) {
        result = std::to_string(number);
    }
    return result;
}

int main() {
    std::cout << convertToRaindropSound(28) << std::endl;  // Output: "Plong"
    std::cout << convertToRaindropSound(30) << std::endl;  // Output: "PlingPlang"
    std::cout << convertToRaindropSound(34) << std::endl;  // Output: "34"
    return 0;
}
