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
    ListNode* reverse(ListNode* head){
        if(head->next==NULL){
            return head;
        }
        
        ListNode* x=reverse(head->next);
        head->next->next=head;
        head->next=NULL;
        
        return x;
    }
    
    ListNode* reverseList(ListNode* head){
        
        if(head==NULL){
            return NULL;
        }
        return reverse(head);
    }
    
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=reverseList(slow->next);
        
        ListNode* start=head;
        ListNode* mid=slow->next;
        
        while(mid!=NULL){
            if(mid->val!=start->val){
                return false;
            }
            start=start->next;
            mid=mid->next;
        }
        return true;
    }
};