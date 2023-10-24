#include <iostream>

int isBean(int arr[], int len) {
    bool contains9 = false;
    bool contains13 = false;
    bool contains7 = false;
    bool contains16 = false;
    
    for (int i = 0; i < len; ++i) {
        if (arr[i] == 9) {
            contains9 = true;
        } else if (arr[i] == 13) {
            contains13 = true;
        } else if (arr[i] == 7) {
            contains7 = true;
        } else if (arr[i] == 16) {
            contains16 = true;
        }
    }
    
    if (contains9 && !contains13) {
        return 0;
    }
    if (contains7 && contains16) {
        return 0;
    }
    
    return 1;
}

int main() {
    int arr1[] = {1, 2, 3, 9, 6, 13};
    int arr2[] = {3, 4, 6, 7, 13, 15};
    int arr3[] = {9, 6, 18};
    int arr4[] = {4, 7, 16};
    
    std::cout << isBean(arr1, sizeof(arr1) / sizeof(arr1[0])) << std::endl;  // Output: 1 (Bean array)
    std::cout << isBean(arr2, sizeof(arr2) / sizeof(arr2[0])) << std::endl;  // Output: 1 (Bean array)
    std::cout << isBean(arr3, sizeof(arr3) / sizeof(arr3[0])) << std::endl;  // Output: 0 (Not a Bean array)
    std::cout << isBean(arr4, sizeof(arr4) / sizeof(arr4[0])) << std::endl;  // Output: 0 (Not a Bean array)
    
    return 0;
}
