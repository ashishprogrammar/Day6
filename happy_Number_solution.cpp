// Leetcode Problem 202: Happy Number
// Author: Ashish Modhawala
// Date: 16/05/2025
// Description: Determines if a number is a happy number using a hash map to detect cycles.

#include <iostream>
#include <unordered_map>

class Solution {
public:
    bool isHappy(int n) {
        // Time Complexity: O(log n), Space Complexity: O(N)
        // We use a hash map to track previously seen numbers to detect cycles
        std::unordered_map<int, bool> visited;

        while (n != 1) {
            if (visited[n] == true) {
                return false; // cycle detected
            }

            visited[n] = true;

            int sum = 0;
            int temp = n;
            while (temp > 0) {
                int digit = temp % 10;
                sum += digit * digit;
                temp /= 10;
            }

            n = sum;
        }

        return true; // reached 1, so it's a happy number
    }
};
