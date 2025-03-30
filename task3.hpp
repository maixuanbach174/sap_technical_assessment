/*
Task 3: Merge Two Sorted Arrays
Problem: Write a function that takes two sorted arrays of integers and merges them into a single
sorted array. The resulting array should also be sorted.
Example:
Input: arr1 = [1, 3, 5], arr2 = [2, 4, 6]
Output: [1, 2, 3, 4, 5, 6]
Input: arr1 = [1, 5], arr2 = [2, 3, 4]
Output: [1, 2, 3, 4, 5]
*/

#include <vector>
using namespace std;

vector<int> mergeSortedArrays(vector<int> arr1, vector<int> arr2) {
    vector<int> mergedArray(arr1.size() + arr2.size()); // Vector to store the merged array
    int i = 0, j = 0, k = 0;

    // Merge the two sorted arrays
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            mergedArray[k] = arr1[i];
            i++;
        } else {
            mergedArray[k] = arr2[j];
            j++;
        }
        k++;
    }

    // Add remaining elements from arr1
    while (i < arr1.size()) {
        mergedArray[k] = arr1[i];
        i++;
        k++;
    }

    // Add remaining elements from arr2
    while (j < arr2.size()) {
        mergedArray[k] = arr2[j];
        j++;
        k++;
    }

    return mergedArray; // Return the merged sorted array
}

/*
    Time Complexity: O(n + m), where n and m are the lengths of arr1 and arr2, respectively
    Space Complexity: O(n + m), for the merged array
*/