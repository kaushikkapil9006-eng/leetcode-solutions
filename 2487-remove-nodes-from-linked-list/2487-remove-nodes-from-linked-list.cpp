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
 ListNode* reverse(ListNode* head){// reverse the linked list code
    ListNode*prev = NULL;
    ListNode*curr = head;
    ListNode*forward = NULL;
    while(curr!=NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;

 }
    ListNode* removeNodes(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;

        head = reverse(head);// list krdi reverse 
        int maxi = head->val; // first value hii max maanli
        ListNode*curr = head;
        while(curr!=NULL && curr->next!=NULL){ 
             if(curr->next->val < maxi){
                ListNode*nodeTodelete = curr->next;
                curr->next = curr->next->next; 
                
            }
            else{
                curr = curr->next;
                maxi = curr->val;
            }
        }
         return reverse(head);     
    }
};