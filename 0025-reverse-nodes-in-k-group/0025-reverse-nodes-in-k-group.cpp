/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {

        // Base case
        if (head == NULL)
            return NULL;

        // Check if at least k nodes are present
        ListNode* temp = head;
        int count = 0;

        while (temp != NULL && count < k) {
            temp = temp->next;
            count++;
        }

        // If fewer than k nodes, don't reverse
        if (count < k)
            return head;

        // Reverse first k nodes
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;

        count = 0;        // Reuse the same variable

        while (curr != NULL && count < k) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }

        // Recursively reverse remaining nodes
        if (next != NULL) {
            head->next = reverseKGroup(next, k);
        }

        // New head after reversing
        return prev;
    }
};