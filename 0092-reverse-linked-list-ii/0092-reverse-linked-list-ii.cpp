class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        if(head == NULL || left == right)
            return head;

        ListNode* prev = NULL;
        ListNode* curr = head;

        // Move to the left position
        for(int i = 1; i < left; i++) {
            prev = curr;
            curr = curr->next;
        }

        ListNode* connection = prev; // Node before left
        ListNode* tail = curr;       // First node of reversed part

        ListNode* next = NULL;
        prev = NULL;

        // Reverse from left to right
        for(int i = left; i <= right; i++) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        // Connect first part
        if(connection != NULL)
            connection->next = prev;
        else
            head = prev;

        // Connect last part
        tail->next = curr;

        return head;
    }
};