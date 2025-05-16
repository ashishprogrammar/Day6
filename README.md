# 🧼 Leetcode 203 - Remove Linked List Elements

## 📝 Problem Statement

Given the `head` of a singly linked list and an integer `val`, remove all the nodes of the linked list that have `Node.val == val`, and return the new head.

> [Leetcode Link 🔗](https://leetcode.com/problems/remove-linked-list-elements/)

---

## 💡 Approach

This solution uses a **two-pointer technique** without relying on a dummy node:

- `curr` traverses the list to find nodes with the target value.
- `prev` keeps track of the last valid (non-deleted) node.
- If the node to be deleted is the head, we update the `head` pointer accordingly.
- Memory used by deleted nodes is properly freed with `delete`.

### Why not use a dummy node?

To stay close to the logic required in lower-level pointer manipulation problems and to maintain full control over `head` and `curr`, this implementation manages deletion directly.

---

## 🛠️ Time and Space Complexity

| Metric            | Complexity |
|-------------------|------------|
| Time Complexity    | O(n)       |
| Space Complexity   | O(1)       |

---

## 📌 Code Location

- File: `203_Remove_Linked_List_Elements.cpp`
- Language: C++
