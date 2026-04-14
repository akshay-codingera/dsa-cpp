#include <iostream>
using namespace std;

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = nullptr;
    }
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Sentinel node to handle edge cases
        ListNode* sentinel = new ListNode(0);
        sentinel->next = head;

        ListNode* fast = sentinel;
        ListNode* slow = sentinel;

        // Move fast pointer n steps ahead
        for (int i = 0; i < n; i++) {
            fast = fast->next;
        }

        // Move both pointers
        while (fast->next != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }

        // Remove target node
        slow->next = slow->next->next;

        return sentinel->next;
    }
};