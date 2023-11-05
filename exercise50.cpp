#include <iostream>
#include <unordered_set>

int isBalanced(int a[], int len) {
    std::unordered_set<int> numSet;

    // Add elements to the set for quick lookup
    for (int i = 0; i < len; ++i) {
        numSet.insert(a[i]);
    }

    // Check if for every element n in the array, -n also exists in the array
    for (int i = 0; i < len; ++i) {
        if (numSet.find(-a[i]) == numSet.end()) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int arr1[] = {-2, 3, 2, -3};
    int arr2[] = {-2, 2, 2, 2};
    int arr3[] = {-5, 2, -2};
    int arr4[] = {1, -1, 2, -2};
    
    std::cout << isBalanced(arr1, 4) << std::endl; // Output: 1 (arr1 is a balanced array)
    std::cout << isBalanced(arr2, 4) << std::endl; // Output: 1 (arr2 is a balanced array)
    std::cout << isBalanced(arr3, 3) << std::endl; // Output: 0 (arr3 is not a balanced array)
    std::cout << isBalanced(arr4, 4) << std::endl; // Output: 1 (arr4 is a balanced array)

    return 0;
}
