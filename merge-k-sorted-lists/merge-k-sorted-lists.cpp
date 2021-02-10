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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        priority_queue<int, vector<int>, greater<int>> pq;
        for(auto ele: lists)
        {
            while(ele != NULL)
            {
                pq.push(ele->val);
                ele = ele->next;
            }
        }
        if(pq.empty())
            return NULL;
    
        ListNode* head = new ListNode(pq.top());
        pq.pop();
        ListNode* h;
        h= head;
        while(!pq.empty())
        {
            ListNode* temp = new ListNode(pq.top());
            h->next = temp;
            h = h->next;
            pq.pop();
        }
        
        return head;
    }
};