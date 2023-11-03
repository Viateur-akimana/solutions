#include <iostream>
#include <vector>

int calculateDifference(std::vector<int> arr) {
    int oddSum = 0;
    int evenSum = 0;
    
    for (int num : arr) {
        if (num % 2 == 0) {
            evenSum += num;
        } else {
            oddSum += num;
        }
    }
    
    return oddSum - evenSum;
}

int main() {
    std::vector<std::vector<int>> testCases = {
        {1},
        {1, 2},
        {1, 2, 3},
        {1, 2, 3, 4},
        {3, 3, 4, 4},
        {3, 2, 3, 4},
        {4, 1, 2, 3},
        {1, 1},
        {}
    };

    for (const auto& testCase : testCases) {
        int result = calculateDifference(testCase);
        std::cout << "For input array [";
        for (int i = 0; i < testCase.size(); ++i) {
            std::cout << testCase[i];
            if (i < testCase.size() - 1) {
                std::cout << ", ";
            }
        }
        std::cout << "], the difference of sum of odd numbers and sum of even numbers is: " << result << std::endl;
    }

    return 0;
}
