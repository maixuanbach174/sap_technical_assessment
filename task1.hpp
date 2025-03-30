/* 
Task 1: Find the First Non-Repeating Character in a String
Problem: Write a function that takes a string and returns the first non-repeating character in the
string. If there are no non-repeating characters, return null.
Example:
Input: "sapstar"
Output: "p"
Input: "aabbcc"
Output: null
*/

#include <string>
#include <vector>
using namespace std;

char firstNonRepeatingCharacter(string str) {
    // Create a vector to store the count of each character
    vector<int> charCount(256, 0); 

    // Count the occurrences of each character
    for (int i = 0; i < str.size(); i++) {
        charCount[str[i] - '0']++;
    }

    // Find the first non-repeating character
    for (int i = 0; i < str.size(); ++i) {
        if (charCount[str[i] - '0'] == 1) {
            return str[i]; // Return the first non-repeating character
        }
    }

    return '\0'; // Return null if no non-repeating character is found
}

/*
    Time Complexity: O(n), where n is the length of the string
    Space Complexity: O(1), since the size of the charCount vector is constant (256)
*/