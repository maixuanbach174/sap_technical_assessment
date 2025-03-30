/*
This file is just for testing purposes and is not part of the solutions.
It contains test cases for the functions implemented in task1.hpp, task2.hpp, and task3.hpp.
The test cases are designed to verify the correctness of the functions and demonstrate their usage.
*/


#include "task1.hpp"
#include "task2.hpp"
#include "task3.hpp"

#include <iostream>

#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    // Test Task 1: Find the First Non-Repeating Character in a String
    cout << "Task 1: Find the First Non-Repeating Character in a String" << endl;
    cout << endl;
    string str1 = "sapstar";
    cout << "Input: \"" << str1 << "\"" << endl;
    char firstNonRepeatingChar = firstNonRepeatingCharacter(str1);
    cout << "Output: ";
    if (firstNonRepeatingChar != '\0') {
        cout << firstNonRepeatingChar << endl;
    } else {
        cout << "null" << endl;
    }
    cout << "Input: \"aabbcc\"" << endl;
    firstNonRepeatingChar = firstNonRepeatingCharacter("aabbcc");
    cout << "Output: ";
    if (firstNonRepeatingChar != '\0') {
        cout << firstNonRepeatingChar << endl;
    } else {
        cout << "null" << endl;
    }
    cout << endl;

    // Test Task 2: Count the Occurrences of Each Character in a String
    cout << "Task 2: Count the Occurrences of Each Character in a String" << endl;
    cout << endl;
    string str2 = "sapstar";
    cout << "Input: \"" << str2 << "\"" << endl;
    unordered_map<char, int> charCount = countCharacterOccurrences(str2);
    cout << "Output: {";
    for (auto it = charCount.begin(); it != charCount.end(); ++it) {
        cout << it->first << "=" << it->second;
        if (next(it) != charCount.end()) {
            cout << ", ";
        }
    }
    cout << "}" << endl;
    cout << "Input: \"aaabbbbcc\"" << endl;
    charCount = countCharacterOccurrences("aaabbbbcc");
    cout << "Output: {";
    for (auto it = charCount.begin(); it != charCount.end(); ++it) {
        cout << it->first << "=" << it->second;
        if (next(it) != charCount.end()) {
            cout << ", ";
        }
    }
    cout << "}" << endl;
    cout << endl;

    // Test Task 3: Merge Two Sorted Arrays
    cout << "Task 3: Merge Two Sorted Arrays" << endl;
    cout << endl;
    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {2, 4, 6, 8};
    cout << "Input: arr1 = {";
    for (int i = 0; i < arr1.size(); ++i) {
        cout << arr1[i];
        if (i != arr1.size() - 1) {
            cout << ", ";
        }
    }
    cout << "}, arr2 = {";
    for (int i = 0; i < arr2.size(); ++i) {
        cout << arr2[i];
        if (i != arr2.size() - 1) {
            cout << ", ";
        }
    }
    cout << "}" << endl;
    vector<int> mergedArray = mergeSortedArrays(arr1, arr2);
    cout << "Output: {";
    for (int i = 0; i < mergedArray.size(); ++i) {
        cout << mergedArray[i];
        if (i != mergedArray.size() - 1) {
            cout << ", ";
        }
    }
    cout << "}" << endl;
    cout << "Input: arr1 = {1, 2, 3}, arr2 = {4, 5, 6}" << endl;
    mergedArray = mergeSortedArrays({1, 2, 3}, {4, 5, 6});
    cout << "Output: {";
    for (int i = 0; i < mergedArray.size(); ++i) {
        cout << mergedArray[i];
        if (i != mergedArray.size() - 1) {
            cout << ", ";
        }
    }
    cout << "}" << endl;
    cout << endl;

    return 0;
}