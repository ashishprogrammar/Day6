// Leetcode Problem 203: Remove Linked List Elements
// Author: Ashish Modhawala
// Date: 16/05/2025
// Description: Removes all nodes with a given value from a singly linked list using two pointers.

#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* curr = head;
        ListNode* prev = nullptr;

        while (curr) {
            if (curr->val == val) {
                if (prev == nullptr && curr == head) {
                    // Deleting the head node
                    head = head->next;
                    delete curr;
                    curr = head;
                } else {
                    // Deleting a non-head node
                    prev->next = curr->next;
                    delete curr;
                    curr = prev->next;
                }
            } else {
                // Move both pointers forward
                prev = curr;
                curr = curr->next;
            }
        }

        return head;
    }
};
