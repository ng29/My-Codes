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
ListNode* merge(ListNode* a,ListNode* b){
    ListNode* res;
     if (a == NULL) 
        return (b); 
    else if (b == NULL) 
        return (a); 
  
    if(a->val<=b->val){
        res=a;
        res->next=merge(a->next,b);
    }
    else{
        res=b;
        res->next=merge(a,b->next);
    }
    return res;
}
class Solution {
public:
    
    ListNode* sortList(ListNode* head) {
if (head == NULL || head->next == NULL)
            return head;
        
        ListNode* slow = head;
        ListNode* fast = head->next;
        
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        //divide the list into two parts 
        fast = slow->next;
        slow->next = NULL;
        
        return merge(sortList(head), sortList(fast));
        
    }
};
