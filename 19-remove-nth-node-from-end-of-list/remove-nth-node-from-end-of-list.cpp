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
        
        ListNode* temp=head;
        int cnt=0;
        while(temp){
              cnt++;
            temp=temp->next;
        }
        if(cnt==n) return head->next;
        int dif=cnt-n;
        ListNode* slow=head;
           ListNode* t=head;

        while(dif>0){
         t=slow;
         slow=slow->next;
         dif--;
        }
        t->next=slow->next;
        return head;
    }
};