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
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int> ans;
       
        ListNode*curr = head;
        
        while(curr!=NULL){
            ans.push_back(curr->val);
            curr = curr->next;
            

        }
        

        int n = ans.size();
        swap(ans[k-1],ans[n-k]);
        if(ans.empty()) return NULL;
        ListNode* newhead = new ListNode(ans[0]);
        curr = newhead;

        

        for(int i = 1;i<n;i++){
            curr->next = new ListNode(ans[i]);
            curr = curr->next;
        }
        return newhead;
       


        
    }
};