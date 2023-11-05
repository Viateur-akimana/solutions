#include <iostream>

int* fill(int arr[], int k, int n) {
    if (k <= 0 || n <= 0) {
        return nullptr;
    }

    int* arr2 = new int[n];
    int currentIndex = 0;

    // Copy the first k elements of arr to arr2
    for (int i = 0; i < k; ++i) {
        arr2[currentIndex++] = arr[i];
    }

    // Repeat the first k elements in arr2 to fill the remaining elements
    while (currentIndex < n) {
        for (int i = 0; i < k && currentIndex < n; ++i) {
            arr2[currentIndex++] = arr[i];
        }
    }

    return arr2;
}

int main() {
    int arr1[] = {1, 2, 3, 5, 9, 12, -2, -1};
    int arr2[] = {4, 2, -3, 12};
    int arr3[] = {2, 6, 9, 0, -3};

    int* result1 = fill(arr1, 3, 10);
    int* result2 = fill(arr2, 1, 5);
    int* result3 = fill(arr3, 0, 4);

    if (result1 != nullptr) {
        for (int i = 0; i < 10; ++i) {
            std::cout << result1[i] << " ";
        }
        std::cout << std::endl;
        delete[] result1;
    }

    if (result2 != nullptr) {
        for (int i = 0; i < 5; ++i) {
            std::cout << result2[i] << " ";
        }
        std::cout << std::endl;
        delete[] result2;
    }

    if (result3 == nullptr) {
        std::cout << "null" << std::endl;
    }

    return 0;
}
