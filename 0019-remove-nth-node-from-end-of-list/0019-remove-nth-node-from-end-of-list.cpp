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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL || head->next == NULL) return NULL;
        
        ListNode*curr = head;
        int length = 0;
        while(curr!=NULL){
            length++;
            curr = curr->next;   
        }
        if(length == n){// if we have to remove the head
            ListNode*temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        curr = head;

        for(int i = 1;i<length - n;i++){// by length -n we will reach to the node before the node to delete 
            curr = curr->next;
        }
        ListNode*temp = curr->next;// node to delete p point krva dia 
        curr->next = curr->next->next;
        delete(temp);
        return head;
        
    }
};