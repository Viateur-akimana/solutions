#include <iostream>

int reverseInteger(int num) {
    bool isNegative = false;
    if (num < 0) {
        isNegative = true;
        num = abs(num);
    }

    int reversedNum = 0;
    while (num > 0) {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }

    // Add back the negative sign if the input number was negative
    if (isNegative) {
        reversedNum = -reversedNum;
    }

    return reversedNum;
}

int main() {
    int testCases[] = {12344321, 1200511, 10001, 0, -12345, -54321};

    for (int num : testCases) {
        int reversedNum = reverseInteger(num);
        std::cout << "The reverse of " << num << " is: " << reversedNum << std::endl;
    }

    return 0;
}
