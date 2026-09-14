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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr||head->next==nullptr||k==0) return head;
        ListNode* temp=head;
        int cnt=0;
        while(temp){
          cnt++;
          temp=temp->next;  
        }
        
       k=k%cnt;
       if(k==0) return head;
       int dif=cnt-k;
         ListNode* h1=head;
        
        while(dif>1){
             h1=h1->next;
            dif--;

        }
        ListNode* h2=h1->next;
        ListNode* tail=h2;
        h1->next=nullptr;
        while(tail->next){
            tail=tail->next;

        }
        tail->next=head;
    
    return h2;}
};