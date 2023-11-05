#include <iostream>
#include <climits>


int isComplete(int a[], int len) {
    bool hasEven = false;
    int minEven = INT_MAX;
    int maxEven = INT_MIN;

    // Check conditions (a) and (b)
    for (int i = 0; i < len; ++i) {
        if (a[i] % 2 == 0) {
            hasEven = true;
            minEven = std::min(minEven, a[i]);
            maxEven = std::max(maxEven, a[i]);
        }
    }

    // Check condition (a)
    if (!hasEven) {
        return 0;
    }

    // Check conditions (d) and (e)
    for (int i = minEven + 1; i < maxEven; ++i) {
        bool found = false;
        for (int j = 0; j < len; ++j) {
            if (a[j] == i) {
                found = true;
                break;
            }
        }
        if (!found) {
            return 0;
        }
    }

    // Check condition (d)
    if (minEven == maxEven) {
        return 0;
    }

    return 1;
}

int main() {
    int arr1[] = {-5, 6, 2, 3, 2, 4, 5, 11, 8, 7};
    int arr2[] = {5, 7, 9, 13};
    int arr3[] = {2, 2};
    int arr4[] = {2, 6, 3, 4};

    std::cout << isComplete(arr1, 10) << std::endl; // Output: 1 (arr1 is a complete array)
    std::cout << isComplete(arr2, 4) << std::endl;  // Output: 0 (arr2 is not a complete array)
    std::cout << isComplete(arr3, 2) << std::endl;  // Output: 0 (arr3 is not a complete array)
    std::cout << isComplete(arr4, 4) << std::endl;  // Output: 0 (arr4 is not a complete array)

    return 0;
}
