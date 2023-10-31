#include <iostream>

int isCenteredArray(int arr[], int size) {
    if (size == 0) {
        return 0; // No middle element in an empty array
    }

    int middleIndex = size / 2;
    int middleElement = arr[middleIndex];

    for (int i = 0; i < size; ++i) {
        if (i != middleIndex && arr[i] <= middleElement) {
            return 0; // Middle element is not strictly greater than all other elements
        }
    }

    return 1; // It is a centered array
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 2, 1, 4, 5};
    int arr3[] = {3, 2, 1, 4, 1};
    int arr4[] = {1, 2, 3, 4};
    int arr5[] = {};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    int size4 = sizeof(arr4) / sizeof(arr4[0]);
    int size5 = sizeof(arr5) / sizeof(arr5[0]);

    std::cout << isCenteredArray(arr1, size1) << std::endl; // Output: 0
    std::cout << isCenteredArray(arr2, size2) << std::endl; // Output: 1
    std::cout << isCenteredArray(arr3, size3) << std::endl; // Output: 0
    std::cout << isCenteredArray(arr4, size4) << std::endl; // Output: 0
    std::cout << isCenteredArray(arr5, size5) << std::endl; // Output: 0

    return 0;
}
