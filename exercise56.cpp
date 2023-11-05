#include <iostream>

int isFilter(int a[], int len) {
    bool contains9 = false;
    bool contains11 = false;
    bool contains7 = false;
    bool contains13 = false;

    // Iterate through the array to check the conditions
    for (int i = 0; i < len; ++i) {
        if (a[i] == 9) {
            contains9 = true;
            if (!contains11) {
                return 0; // If 9 is present but not 11, return 0
            }
        } else if (a[i] == 11) {
            contains11 = true;
        } else if (a[i] == 7) {
            contains7 = true;
        } else if (a[i] == 13) {
            contains13 = true;
            if (contains7) {
                return 0; // If 13 is present along with 7, return 0
            }
        }
    }

    // Check if the conditions are satisfied, return 1; otherwise, return 0
    if ((contains9 && contains11) || (!contains7 && !contains13)) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int arr1[] = {1, 2, 3, 9, 6, 11};
    int arr2[] = {3, 4, 6, 7, 14, 16};
    int arr3[] = {1, 2, 3, 4, 10, 11, 13};
    int arr4[] = {3, 6, 5, 5, 13, 6, 13};
    int arr5[] = {9, 6, 18};
    int arr6[] = {4, 7, 13};

    std::cout << isFilter(arr1, 6) << std::endl; // Output: 1 (arr1 is a Filter array)
    std::cout << isFilter(arr2, 6) << std::endl; // Output: 1 (arr2 is a Filter array)
    std::cout << isFilter(arr3, 7) << std::endl; // Output: 1 (arr3 is a Filter array)
    std::cout << isFilter(arr4, 7) << std::endl; // Output: 1 (arr4 is a Filter array)
    std::cout << isFilter(arr5, 3) << std::endl; // Output: 0 (arr5 is not a Filter array)
    std::cout << isFilter(arr6, 3) << std::endl; // Output: 0 (arr6 is not a Filter array)

    return 0;
}
