class Solution {
public:

    ListNode* deleteMiddle(ListNode* head) {

        // Only one node
        if (head == NULL || head->next == NULL)
            return NULL;

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL;

        while (fast != NULL && fast->next != NULL) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        // slow is the middle node
        prev->next = slow->next;

        delete slow;

        return head;
    }
};