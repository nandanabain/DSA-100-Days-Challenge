class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr != nullptr) {
            // Save the next node before changing the link
            ListNode* next = curr->next;

            // Reverse the current node's pointer
            curr->next = prev;

            // Move both pointers forward
            prev = curr;
            curr = next;
        }

        return prev;
    }
};
