#include <iostream>
#include <unordered_set>

int isAllPossibilities(int a[], int len) {
    // Create a set to store unique elements from the array
    std::unordered_set<int> uniqueElements;

    // Iterate through the array and add elements to the set
    for (int i = 0; i < len; ++i) {
        // Check if the element is within the valid range [0, len-1]
        if (a[i] < 0 || a[i] >= len) {
            return 0;
        }
        uniqueElements.insert(a[i]);
    }

    // Check if the set size is equal to len (all elements between 0 to len-1 are present)
    return (uniqueElements.size() == static_cast<std::size_t>(len)) ? 1 : 0;
}

int main() {
    int arr1[] = {1, 2, 0, 3};
    int arr2[] = {3, 2, 1, 0};
    int arr3[] = {1, 2, 4, 3};
    int arr4[] = {0, 2, 3};
    int arr5[] = {0};
    int arr6[] = {};

    std::cout << isAllPossibilities(arr1, 4) << std::endl; // Output: 1 (arr1 is an array of all possibilities)
    std::cout << isAllPossibilities(arr2, 4) << std::endl; // Output: 1 (arr2 is an array of all possibilities)
    std::cout << isAllPossibilities(arr3, 4) << std::endl; // Output: 0 (arr3 is not an array of all possibilities)
    std::cout << isAllPossibilities(arr4, 3) << std::endl; // Output: 0 (arr4 is not an array of all possibilities)
    std::cout << isAllPossibilities(arr5, 1) << std::endl; // Output: 1 (arr5 is an array of all possibilities)
    std::cout << isAllPossibilities(arr6, 0) << std::endl; // Output: 0 (arr6 is not an array of all possibilities)

    return 0;
}
