#include <iostream>

int isBean(int a[], int len) {
    bool contains9 = false;
    bool contains13 = false;
    bool contains7 = false;
    bool contains16 = false;

    for (int i = 0; i < len; ++i) {
        if (a[i] == 9) {
            contains9 = true;
            if (contains13) {
                return 1;
            }
        } else if (a[i] == 13) {
            contains13 = true;
        } else if (a[i] == 7) {
            contains7 = true;
        } else if (a[i] == 16) {
            contains16 = true;
            if (contains7) {
                return 0;
            }
        }
    }

    if (contains9 && !contains13) {
        return 0;
    }

    return 1;
}

int main() {
    int arr1[] = {1, 2, 3, 9, 6, 13};
    int arr2[] = {3, 4, 6, 7, 13, 15};
    int arr3[] = {9, 6, 18};
    int arr4[] = {4, 7, 16};

    std::cout << isBean(arr1, 6) << std::endl; // Output: 1 (arr1 is a Bean array)
    std::cout << isBean(arr2, 6) << std::endl; // Output: 1 (arr2 is a Bean array)
    std::cout << isBean(arr3, 3) << std::endl; // Output: 0 (arr3 is not a Bean array)
    std::cout << isBean(arr4, 3) << std::endl; // Output: 0 (arr4 is not a Bean array)

    return 0;
}
