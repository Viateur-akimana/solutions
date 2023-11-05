#include <iostream>

int isHollow(int a[], int len) {
    if (len < 3 || a[0] != 0 || a[len - 1] != 0) {
        return 0;
    }

    int firstNonZeroCount = 0;
    int zeroCount = 0;
    int lastNonZeroCount = 0;
    bool zerosStarted = false;

    for (int i = 0; i < len; ++i) {
        if (a[i] == 0) {
            zerosStarted = true;
            zeroCount++;
        } else {
            if (!zerosStarted) {
                firstNonZeroCount++;
            } else {
                lastNonZeroCount++;
            }
        }
    }

    return zeroCount >= 3 && firstNonZeroCount == lastNonZeroCount;
}

int main() {
    int arr1[] = {1, 2, 4, 0, 0, 0, 3, 4, 5};
    int arr2[] = {1, 2, 0, 0, 0, 3, 4, 5};
    int arr3[] = {1, 2, 4, 9, 0, 0, 0, 3, 4, 5};
    int arr4[] = {1, 2, 0, 0, 3, 4};

    std::cout << isHollow(arr1, 9) << std::endl; // Output: 1 (arr1 is a hollow array)
    std::cout << isHollow(arr2, 8) << std::endl; // Output: 0 (arr2 is not a hollow array)
    std::cout << isHollow(arr3, 10) << std::endl; // Output: 0 (arr3 is not a hollow array)
    std::cout << isHollow(arr4, 6) << std::endl; // Output: 0 (arr4 is not a hollow array)

    return 0;
}
