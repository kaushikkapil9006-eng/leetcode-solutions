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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode*temp1 = head;
        int index = 1;
       
        if(head == NULL||head->next==NULL || head->next->next == NULL){
            return {-1,-1};
        }
        ListNode*temp = head->next;
        vector<int> ans;
        while(temp->next!=NULL){
            if((temp->val>temp1->val && temp->val> temp->next->val)||(temp->val<temp1->val && temp->val< temp->next->val)){
                ans.push_back(index);
            }
            temp1 = temp;
            temp = temp->next;
            index++;
        }
        if(ans.size()<2){
            return {-1,-1};
        }
        int mini = *min_element(ans.begin(),ans.end());
        int maxi = *max_element(ans.begin(),ans.end());
        int maxDistance = maxi - mini;

        int minDistance  = INT_MAX;
        for(int i = 1;i<ans.size();i++){
            minDistance = min(minDistance,ans[i] - ans[i-1]);
        }

        return {minDistance, maxDistance};



        
    }
};