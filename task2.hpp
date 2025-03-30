/*
Task 2: Count the Occurrences of Each Character in a String
Problem: Write a function that counts the occurrences of each character in a string and returns a
map of characters to their respective counts.
Example:
Input: "sapstar"
Output: {s=2, a=2, p=1, t=1, r=1}
Input: "aaabbbbcc"
Output: {a=3, b=4, c=2}
*/

#include <string>
#include <unordered_map>
using namespace std;

unordered_map<char, int> countCharacterOccurrences(string str) {
    unordered_map<char, int> charCount; // Map to store character counts

    // Count the occurrences of each character
    for (int i = 0; i < str.size(); ++i) {
        charCount[str[i]]++;
    }

    return charCount; // Return the map of character counts
}

/*
    Time Complexity: O(n), where n is the length of the string
    Space Complexity: O(k), where k is the number of unique characters in the string
*/